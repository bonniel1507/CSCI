#Bonnie Lei
#bonnie.lei49@myhunter.cuny.edu
#Modify the parking ticket program from Lab 8 to do the following:
#Ask the user for the name of the input file.
#Ask the user for the attribute (column header) to search by.

import pandas as pd

file = pd.read_csv(input('Enter file name: '))
print('The 10 worst offenders are:')
print(file[input('Enter attribute: ')].value_counts()[:10])
