import cv2
import numpy as np

img=cv2.imread('image.jpg')
cv2.imshow('Original', img)
#image=cv2.resize(img,(500, 700))

# Creating a copy of the Original Image
img2=img.copy()

gray_image=cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# Conversion of Image into 3 channel for Concatenation Process
img2[:, :, 0]=gray_image
img2[:, :, 1]=gray_image
img2[:, :, 2]=gray_image


cv2.imshow('Grayimage', img2)
cv2.waitKey(0)
cv2.destroyAllWindows()