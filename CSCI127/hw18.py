#Name: Bonnie Lei
#Email: bonnie.lei49@myhunter.cuny.edu
#Create a program that creates a image of purple and yellow stripes. Your program should ask the user for the size of your image, the name of the output file, and create a .png file of stripes.
# 1/5

import matplotlib.pyplot as plt
import numpy as np

num = input("Enter the size: ")
img = np.zeros((num, num, 3))
# img[::2,:,:2] = 1
# img[1::2,:,::2] = 1
plt.imsave(input("Enter output file: "), img)
