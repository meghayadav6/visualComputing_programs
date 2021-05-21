import cv2
import numpy as np
image = cv2.imread('E:\WALLPAPERS\ww.jpg',1)
cv2.imshow("original image",image)
cropped = image[50:150, 350:540]
cv2.imshow("cropped", cropped)
cv2.waitKey(0)
