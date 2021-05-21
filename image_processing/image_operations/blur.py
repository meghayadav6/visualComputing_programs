import cv2
im = cv2.imread('E:\WALLPAPERS\ee.jpg',1)  
cv2.imshow('Original Image',im)  
cv2.imshow('Blurred Image', cv2.blur(im, (8,8)))  
cv2.waitKey(0)  
cv2.destroyAllWindows()
