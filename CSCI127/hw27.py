#Name: Bonnie Lei
#Email: bonnie.lei49@myhunter.cuny.edu
#Modify the program from Lab 6 that displays the NYC historical population data. Your program should ask the user for the borough, an name for the output file, and then display the fraction of the population that has lived in that borough, over time.

import pandas as pd
import matplotlib.pyplot at plt

pop = pd.read_csv('nycHistPop.csv',skiprows=5)
print(pop)

pop['Fraction'] = pop[input("Enter borough name: ")]/pop['Total']
pop.plot(x = "Year", y = "Fraction")
print(pop['Fraction'])

fig = plt.gcf()
fig.savefig(input("Enter output file name: "))
