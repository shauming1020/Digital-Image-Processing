# -*- coding: utf-8 -*-
"""
Created on Tue Dec 24 15:30:46 2019

@author: DCMC
"""

import cv2

def clahe_hist(img):
    clahe = cv2.createCLAHE(clipLimit=2.0, tileGridSize=(8,8))
    cl1 = clahe.apply(img)
    return cl1

def opening_vertical(img, size):
    kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, size)
    opening = cv2.morphologyEx(img, cv2.MORPH_OPEN, kernel, iterations=2)
    
    return opening

def closing_horizotal(img, size):
    kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE,size)
    closing = cv2.morphologyEx(img, cv2.MORPH_CLOSE, kernel, iterations=2)
    
    return closing

def back_processing(img, mode=2):
    if mode == 1:
        result = opening_vertical(img, (3,10))
        result = closing_horizotal(result, (10,3))
    elif mode == 2:
        result = closing_horizotal(img, (10,3))
        result = opening_vertical(result, (30,10)) 
    elif mode == 0:
        return img
    
    return result

if __name__ == "__main__":
    # for i in range(60) :
    #     if i < 9 :
    #         ze = '000'
    #     elif 9 <= i and i < 99 :
    #         ze = '00'       
    #     img = cv2.imread('data/cross_val/f03/imgs/' + ze + str(i+1) + '.png', 0)
    #     # mask = cv2.imread('data/masks/' + ze + str(i+1) + '.png', 0)   
    #     img = clahe_hist(img)       
    #     cv2.imwrite('data/t/'+ ze + str(i+1) + '.png', img)
    
    img = cv2.imread('./predict/predict_47.png')
    op = opening_vertical(img)
    cl = closing_horizotal(img)
    res = back_processing(img)
    
    cv2.imshow('raw', cv2.resize(img, (int(0.7*500),\
                                       int(0.7*1200))) )      
    cv2.imshow('op', cv2.resize(op, (int(0.7*500),\
                                     int(0.7*1200))) )
    cv2.imshow('cl', cv2.resize(cl, (int(0.7*500),\
                                     int(0.7*1200))) )
    cv2.imshow('result', cv2.resize(res, (int(0.7*500),\
                                          int(0.7*1200))) )       
    
    
    cv2.waitKey(0)
    cv2.destroyAllWindows()
    
