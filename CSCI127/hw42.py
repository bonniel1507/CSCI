# Bonnie Lei
# bonnie.lei49@myhunter.cuny.edu
# Write a program that uses folium to make a map of New York City. Your map should be centered at (40.75, -74.125) and include a marker for the main campus of Hunter College. The HTML file your program creates should be called: nycMap.html

import folium

mapCUNY = folium.Map(location=[40.75, -74.125], zoom_start=10)
folium.Marker(location = [40.768731, -73.964915], popup = "Hunter College").add_to(mapCUNY)
mapCUNY.save(outfile='nycMap.html')
