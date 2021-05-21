import cv2
import numpy as np
img1 = cv2.imread('E:\WALLPAPERS\ww.jpg',1)
cv2.imshow('Original Image',img1) 
filter = np.array([[-1, -1, -1], [-1, 9, -1], [-1, -1, -1]])
sharpen_img_1=cv2.filter2D(img1,-1,filter)
cv2.imshow('image',sharpen_img_1)
cv2.waitKey(0)
