#Bonnie Lei
#bonnie.lei49@myhunter.cuny.edu
#Write a program that asks the user for the name of an image, the name of an output file. Your program should then save the lower left quarter of the image to the output file specified by the user.

import matplotlib.pyplot as plt
import numpy as np

img = plt.imread(input("Enter image file name: "))
img2 = img[img.shape[0]//2:, :img.shape[1]//2]
plt.imsave(input("Enter output file: "), img2)
