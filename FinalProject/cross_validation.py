# -*- coding: utf-8 -*-
"""
Created on Tue Dec 24 23:26:10 2019

@author: DCMC
"""
import sys
import os
import numpy as np
import torch

from eval import eval_net
from unet import UNet
from resunet import ResidualUNet
from utils.dataset import BasicDataset
from torch.utils.data import DataLoader
from train import train_net
from predict import *

def make_dataset(img_scale = 0.2):
    train_dataset, val_dataset = [], []
    for i in range(1, 4):
        # dir_img = 'data/cross_val/f0' + str(i) + '/imgs_pretrain/'
        # dir_mask = 'data/cross_val/f0' + str(i) + '/masks_pretrain/'
        # dir_img_val = 'data/cross_val/f0' + str(i) + '/imgs_pretrain_val/'
        # dir_mask_val = 'data/cross_val/f0' + str(i) + '/masks_pretrain_val/'       
        dir_img = 'data/cross_val/f0' + str(i) + '/imgs/'
        dir_mask = 'data/cross_val/f0' + str(i) + '/masks/'
        dir_img_val = 'data/cross_val/f0' + str(i) + '/imgs_val/'
        dir_mask_val = 'data/cross_val/f0' + str(i) + '/masks_val/'
        train_dataset.append(BasicDataset(dir_img, dir_mask, img_scale)   )
        val_dataset.append(BasicDataset(dir_img_val, dir_mask_val, img_scale)  )
    
    return train_dataset, val_dataset

def cross_validation():
    train_dataset, val_dataset = make_dataset()
    device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')   
    model_name = 'U_f0'    
    cross_history = {}
    val_score = []        
    for i in range(3):
        net = ResidualUNet(n_channels=1, n_classes=1) # input R=G=B = gray scale
        net.load_state_dict(
            torch.load('model/pretrain_f0' + str(i+1) + '.pth', map_location=device)
        )   
        net.to(device=device)
        
        # faster convolutions, but more memory
        torch.backends.cudnn.benchmark = True        
          
        try:
            cross_history['f0'+str(i+1)] =\
            train_net(net,
                      train_dataset[i],
                      val_dataset[i],
                      device,
                      epochs=512,
                      batch_size=4,
                      lr=0.001,
                      img_scale=0.2, 
                      data_augment=True,
                      iteration=model_name+str(i+1))
            
        except KeyboardInterrupt:
            torch.save(net.state_dict(), './model/INTERRUPTED.pth')
            try:
                sys.exit(0)
            except SystemExit:
                os._exit(0)   
      
        torch.save(net.state_dict(), './model/'+ model_name + str(i+1) + '_last.pth')      
        val_loader = DataLoader(val_dataset[i], batch_size=4, shuffle=False, num_workers=0, pin_memory=True)
        current_score = eval_net(net, val_loader, device, n_val = 20)
        val_score.append(current_score)
    
    print("")
    print(val_score)
    print('Average score = ' + str(np.sum(val_score) / 3) )
    
    return cross_history

def ensemblePredict(img, scale_factor=0.2, out_threshold=0.9,\
                    mean_thre=0.9, mode='_last.pth'):
    
    device = torch.device('cuda' if torch.cuda.is_available() else 'cpu') 
    
    masks = []
    for i in range(3):
        net = ResidualUNet(n_channels=1, n_classes=1) # input R=G=B = gray scale
        net.to(device=device)
        
        Loaded_model = './model/f0' + str(i+1) + mode    
        
        net.load_state_dict(torch.load(Loaded_model, map_location=device))
        print('load model<<' + Loaded_model)
    
        mask = predict_img(net=net,
                            full_img=img,
                            scale_factor=scale_factor,
                            out_threshold=out_threshold,
                            device=device)
        
        masks.append(mask)
    
    mask_mean = np.mean(masks, axis=0)
    where_is_mask = mask_mean > mean_thre
    
    return where_is_mask

if __name__ == '__main__':
    # device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')
    # net = UNet(n_channels=1, n_classes=1) # input R=G=B = gray scale
    # net.to(device=device)
    # from torchsummary import summary
    # summary(net, input_size=(1, int(0.2 * 500), int(0.2 * 1200))) 
    
    cross_history = cross_validation()
    
    import pickle
    f = open("history/resunet_withpretrain_history.pkl","wb")
    pickle.dump(cross_history, f)
    f.close()
    