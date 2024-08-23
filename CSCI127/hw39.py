# Bonnie Lei
# bonnie.lei49@myhunter.cuny.edu
# Write a program that asks the user for a CSV of collision data (see note below about obtaining reported collisions from NYC OpenData). Your program should then list the top three contributing factors for the primary vehichle of collisions ("CONTRIBUTING FACTOR VEHICLE 1") in the file.

import pandas as pd

file = pd.read_csv(input('Enter CSV file name: '))
print('Top three contributing factors for collisions: ')
print(file['CONTRIBUTING FACTOR VEHICLE 1'].value_counts()[:3])
