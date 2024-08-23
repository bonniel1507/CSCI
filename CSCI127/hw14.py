#Name: Bonnie Lei 
#Email: bonnie.lei49@myhunter.cuny.edu 
#Write a program that asks the user for a name of an image .png file and the name of an output file. Your program should create a new image that has only red and blue channel of the original image.

import matplotlib.pyplot as plt
import numpy as np

img = plt.imread(input("Enter name of the input file: "))
img2 = img.copy()
img2[:,:,1] = 0
plt.imsave(input("Enter name of the output file: "), img2)
