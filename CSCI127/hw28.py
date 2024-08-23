#Name: Bonnie Lei
#Email: Bonnie.lei49@myhunter.cuny.edu
#Write a program that computes the average and maximum population over time for a borough (entered by the user). Your program should assume that the NYC historical population data file, nycHistPop.csv is in the same directory.

import pandas as pd
pop = pd.read_csv('nycHistPop.csv', skiprows=5)
b = input("Enter a borough:")
avg = pop[b].mean()
m = pop[b].max()
print("Average population: ", avg)
print("Maximum population: ", m)
