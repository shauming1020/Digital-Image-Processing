# -*- coding: utf-8 -*-
"""
Created on Thu Dec 12 09:46:46 2019

@author: DCMC
"""

import random
import numpy as np
import torch
import torch.nn as nn
import torchvision.transforms.functional as TF
from torch import optim
from eval import eval_net
from torch.utils.data import DataLoader, random_split

def train_net(net,
              dataset,
              val_dataset,
              device,
              epochs=512,
              batch_size=4,
              lr=0.01,
              img_scale=0.2, 
              data_augment=True,
              iteration='_'):
       
    n_val = len(val_dataset)

    train_loader = DataLoader(dataset, batch_size=batch_size, shuffle=True, num_workers=0, pin_memory=True)
    val_loader = DataLoader(val_dataset, batch_size=batch_size, shuffle=False, num_workers=0, pin_memory=True)

    global_step = 0
    
    optimizer = optim.Adam(net.parameters(), lr=lr, weight_decay=1e-8)
    criterion = nn.BCEWithLogitsLoss() # 1 class
    
    best_score = 0
    loss_history, dc_history = [], []
    
    for epoch in range(epochs):
        print('epoch/epochs: ' + str(epoch+1) +'/'+str(epochs))
        net.train()
        
        adjust_learning_rate(lr, optimizer, epoch)
        
        epoch_loss = 0
       
        for batch in train_loader:
            imgs = batch['image']
            true_masks = batch['mask']
            
            
            if data_augment:
                for i in range(imgs.__len__()):
                    imgs[i], true_masks[i] = my_segmentation_transforms(imgs[i], true_masks[i])
            
            imgs = imgs.to(device=device, dtype=torch.float32)
            true_masks = true_masks.to(device=device, dtype=torch.float32)
            
            masks_pred = net(imgs)
            loss = my_loss_function(masks_pred, true_masks, criterion)
            epoch_loss += loss.item()
            
            optimizer.zero_grad()
            loss.backward()
            optimizer.step()

            global_step += 1
            
            val_score = 0
            if global_step % (len(dataset) // (10 * batch_size)) == 0:
                if n_val != 0:                   
                    val_score_batch = eval_net(net, val_loader, device, n_val)
                    print(" ")
                    print('Validation Dice Coeff: {}'.format(val_score_batch))
                    val_score += val_score_batch
                else:
                    val_score = 0.1
                    
        if best_score <= val_score:
            torch.save(net.state_dict(), './model/'+ iteration + '_best.pth')
            print('Best saved !')
            best_score = val_score
            
        loss_history.append(loss)
        dc_history.append(val_score)
        
    return loss_history, dc_history
                              

def dice_loss(input, target) :
    eps = 1
    inter = torch.dot(input.view(-1), target.view(-1))
    union = torch.sum(input) + torch.sum(target) + eps

    return 1 - ((2 * inter.float() + eps) / union.float() )
    

def my_loss_function(masks_pred, true_masks, criterion):
    dc_weight = 0.1
    
    bce = criterion(masks_pred, true_masks)
    dc = dice_loss(masks_pred, true_masks.squeeze(dim=1))  # minimize this term
    
    return bce + dc_weight * dc
        
def my_segmentation_transforms(image, segmentation):
    
    image = image.numpy().transpose((1, 2, 0)) * 255
    segmentation = segmentation.numpy().transpose((1, 2, 0)) * 255
    
    image, segmentation = TF.to_pil_image(image.astype(np.uint8)),\
                        TF.to_pil_image(segmentation.astype(np.uint8))
    
    if random.random() > 0.5:
        image = TF.affine(image, 15, (2, 2), 1, 0.2)
        segmentation = TF.affine(segmentation, 15, (2, 2), 1, 0.2)       
        
    if random.random() > 0.5:
        image = TF.hflip(image)
        segmentation = TF.hflip(segmentation)
        
    if random.random() > 0.5:
        image = TF.adjust_brightness(image, random.uniform(0.2, 2))
    if random.random() > 0.5:
        image = TF.adjust_contrast(image, random.uniform(0.2, 2))
    if random.random() > 0.5:
        image = TF.adjust_saturation(image, random.uniform(0.2, 2))
    if random.random() > 0.5:
        image = TF.adjust_hue(image, random.random() - 0.5)
    
    image, segmentation = TF.to_tensor(image), TF.to_tensor(segmentation)
    
    return image, segmentation

def adjust_learning_rate(LEARNING_RATE, optimizer, epoch):
    lr = LEARNING_RATE * (0.8 ** (epoch // 128))
    for param_group in optimizer.param_groups:
        param_group['lr'] = lr

