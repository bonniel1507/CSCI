# Bonnie Lei
# bonnie.lei49@myhunter.cuny.edu
# Using folium (see Lab 9), write a program that asks the user for the name of a CSV file, name of the output file, and creates a map with markers for all the traffic collisions from the input file. You can use the same dataset from Problem 39.

import folium
import pandas as pd

collisions = pd.read_csv(input('Enter input filename:'))
collisions["LATITUDE"] = collisions["LATITUDE"].fillna(0)
collisions["LONGITUDE"] = collisions["LONGITUDE"].fillna(0)

mapCrash = folium.Map(location = [40.768731, -73.964915], zoom_start = 3)

for index, row in collisions.iterrows():
    if row['LATITUDE'] != 0 and row['LONGITUDE'] != 0:
        lat = row["LATITUDE"]
        long = row["LONGITUDE"]
        name = row["TIME"]
        folium.Marker(location = [lat, long], popup=name).add_to(mapCrash)

mapCrash.save(outfile=input('Enter output filename:'))
