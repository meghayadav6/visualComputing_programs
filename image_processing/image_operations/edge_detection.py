import cv2
import numpy as np

imagedata_original=cv2.imread('E:\WALLPAPERS\ss.jpg',1)
sobel_edg_x=cv2.Sobel(imagedata_original,cv2.CV_64F,0,1,ksize=5)
sobel_edg_y=cv2.Sobel(imagedata_original,cv2.CV_64F,1,0,ksize=5)

cv2.imshow('original',imagedata_original)
cv2.waitKey(0)

cv2.imshow('sobel x',sobel_edg_x)
cv2.waitKey(0)
cv2.imshow('sobel y',sobel_edg_y)
cv2.waitKey(0)

OR_operation=cv2.bitwise_or(sobel_edg_x,sobel_edg_y)
cv2.imshow('or operation',OR_operation)
cv2.waitKey(0)

laplacian_edg_det=cv2.Laplacian(imagedata_original,cv2.CV_64F)
cv2.imshow('laplacian edge detection',laplacian_edg_det)
cv2.waitKey(0)

canny_edg=cv2.Canny(imagedata_original,30,180)
cv2.imshow('canny edge detection',canny_edg)
cv2.waitKey(0)

cv2.destroyAllWindows()
