#Bonnie Lei
#bonnie.lei49@myhunter.cuny.edu
#Modify the program from Lab 7 that displays shelter population over time to:
# 1/5

import pandas as pd
import matplotlib.pyplot as plt

homeless = pd.read_csv(input("Enter name of input file: "))
#
homeless.plot(x = "Date of Census", y = "Total Individuals in Shelter")
fig = plt.gcf()
fig.savefig(input("Enter name of output file: "))
