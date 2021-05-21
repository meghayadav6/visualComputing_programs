import cv2
import numpy as np
input_image=cv2.imread('E:\WALLPAPERS\qq.jpg')
cv2.imshow("original image",input_image)
height,width=input_image.shape[:2]
print(height,width)
height_fourth,width_fourth=height/4,width/4
t=np.float32([[1,0,height_fourth],[0,1,width_fourth]])
print(t)
translation=cv2.warpAffine(input_image,t,(width,height))
cv2.imshow("translation",translation)
cv2.waitKey()
cv2.destroyAllWindows()
