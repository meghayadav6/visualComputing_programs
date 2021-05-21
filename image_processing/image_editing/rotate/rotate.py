import cv2  
img = cv2.imread('E:\WALLPAPERS\ee.jpg',1)  
(h, w) = img.shape[:2]  
center = (w / 2, h / 2)  
  
angle = 30  
 
scale = 1.0  
M = cv2.getRotationMatrix2D(center, angle, scale)  
rotated = cv2.warpAffine(img, M, (h, w))  
cv2.imshow("original image",img)  
cv2.imshow('Image rotated', rotated)  
cv2.waitKey(0) 
cv2.destroyAllWindows()  


