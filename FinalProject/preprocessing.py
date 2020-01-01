# -*- coding: utf-8 -*-
"""
Created on Tue Dec 24 15:30:46 2019

@author: DCMC
"""

import numpy as np
import cv2
import matplotlib.pyplot as plt

imgs, masks = [], []

def clahe_hist(img):
    clahe = cv2.createCLAHE(clipLimit=2.0, tileGridSize=(8,8))
    cl1 = clahe.apply(img)
    return cl1

def fillHole(img):
    th, im_th = cv2.threshold(img, 220, 255, cv2.THRESH_BINARY_INV)
    im_floodfill = img.copy()
    
    h, w = img.shape[:2]
    mask = np.zeros((h+2, w+2), np.uint8)
    
    cv2.floodFill(im_floodfill, mask, (0,0), 255)
    
    im_floodfill_inv = cv2.bitwise_not(im_floodfill)
    
    return im_th | im_floodfill_inv
    

if __name__ == "__main__":
    for i in range(60) :
        if i < 9 :
            ze = '000'
        elif 9 <= i and i < 99 :
            ze = '00'
        
        img = cv2.imread('data/imgs/' + ze + str(i+1) + '.png', 0)
        mask = cv2.imread('data/masks/' + ze + str(i+1) + '.png', 0)
    
        img = clahe_hist(img)
        
        cv2.imwrite('data/t/'+ ze + str(i+1) + '.png', img)
        
        imgs.append(img)
        masks.append(mask)
    
