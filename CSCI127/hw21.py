#Name:  Bonnie Lei
#Email: bonnie.lei49@myhunter.cuny.edu
#This program loads an image, counts the number of pixels that are nearly white as an estimate for snow pack.

import matplotlib.pyplot as plt
import numpy as np

ca = plt.imread(input("Enter file name: "))
countSnow = 0
t = 0.75

for i in range(ca.shape[0]):
     for j in range(ca.shape[1]):
          if (ca[i,j,0] > t) and (ca[i,j,1] > t) and (ca[i,j,2] > t):
               countSnow = countSnow + 1

print("Snow count is", countSnow)
