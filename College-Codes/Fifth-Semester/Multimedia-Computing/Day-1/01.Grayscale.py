import cv2
import os
import numpy as np
# here cv2, os and numpy are libraries of python 
# Here, img is an object

# img=cv2.imread('./img/image.jpg')
img=cv2.imread('image.jpg')
# imread is a keyword under cv2 library which reads input as image

# before is the name of transformation of windows
cv2.imshow('initialImage',img)
#img=cv2.resize(img,(400, 500))
# imshow is a keyword under cv2 library which shows/displays greyscaled (Black/White) image as output

image=cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
(thresh, bimage1)=cv2.threshold(image, 127, 255, cv2.THRESH_BINARY)

(thresh, bimage2)=cv2.threshold(image, 150, 200, cv2.THRESH_BINARY)

#both_image=np.hstack([image, b image1, bimage2])

cv2.imshow('Black&White_image_with_first_threshold_value', bimage1)
cv2.waitKey(0)

cv2.imshow('Black&White_image_with_second_threshold_value', bimage2)
cv2.waitKey(0)

cv2.destroyAllWindows()