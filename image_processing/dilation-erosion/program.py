import cv2
import numpy as np
img = cv2.imread('E:\WALLPAPERS\ss.jpg',1)
kernal=np.ones((4,8),np.uint8)
img_dilation = cv2.dilate(img, kernal, iterations=1)
img_erosion = cv2.erode(img, kernal, iterations=1)
cv2.imshow('Input', img)
cv2.imshow('Dilation', img_dilation)
cv2.imshow('erosion', img_dilation)
cv2.waitKey(0)
