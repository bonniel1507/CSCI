# Bonnie Lei
# bonnie.lei49@myhunter.cuny.edu
# Fill in the following functions in a program that maps GIS data from NYC OpenData CSV files and marks the current location and closest point:
# getData() that asks the user for the name of the CSV and returns a dataframe of the contents.
# getColumnNames() that asks the user for the exact name of the columns that contains the latitude and longitude and returns those values as a tuple. Since the NYC OpenData files use different names for the columns in different datasets (such as "Lat", "Latitude", "LATITUDE" for latitude), the program asks for the name of the column as well as the name of the data file.
# getLocale() asks the user for latitude and longitude of the user's current location and returns those floating points numbers.
# computeDist() that computes the squared distance between two points (x1,y1) and (x2,y2):
# (x1-x2)2 + (y1-y2)2

import folium
import pandas as pd

def getData():
     """
     Asks the user for the name of the CSV and
     Returns a dataframe of the contents.
     """

     df = pd.read_csv(input('Enter CSV file name: '))

     return(df)


def getColumnNames():
     """
     Asks the user for the exact name of the columns that
     contains the latitude and longitude and
     Returns those values as a tuple.
     """

     latName, lonName = input('Enter column name for latitude: '), input('Enter column name for longitude: ')

     return(latName,lonName)


def getLocale():
     """
     Asks the user for latitude and longitude of the user's current location and
     Returns those floating points numbers.

     """

     lat, lon = input('Enter current latitude: '), input('Enter current longitude: ')

     return(lat, lon)


def computeDist(x1,y1,x2,y2):
     """
     Computes the squared distance between two points (x1,y1) and (x2,y2) and
     Returns (x1-x2)^2 + (y1-y2)^2
     """
     d = pow((x1-x2), 2) + pow((y1-y2), 2)

     return(d)


######################################################################
### DO NOT CHANGE ANYTHING BELOW HERE                              ###
######################################################################

def dotAllPoints(cMap,df,latCol,lonCol):
     """
     Mark all points in the latCol, lonCol with dots (little circle markers)
     """
     for i, row in df.iterrows():
          folium.CircleMarker(location=[row[latCol],row[lonCol]], radius=4,color='red').add_to(cMap)


def markAndFindClosest(cMap,df,latCol,lonCol,cLat,cLon):
     """
     Goes through the list of points, marking each with a circle marker.
     Finds the closest point using the computeDist() function and
     Returns the lat and lon of closest point.
     """

     #Find closest marker:
     df['Dist'] = df[[latCol,lonCol]].apply(lambda row: computeDist(*row,cLat,cLon), axis=1)
     minRow = df[df['Dist'] == df['Dist'].min()]

     #Make a marker for the closest point:
     folium.Marker(location=[float(minRow[latCol]),float(minRow[lonCol])],
                   popup="Closest").add_to(cMap)
     #Make a marker for the starting point
     folium.Marker(location=[cLat,cLon],
                   popup="You Are Here",
                   icon=folium.Icon(color='red')).add_to(cMap)


def writeMap(cMap):
     """
     Writes the inputted map, cMap, to the file specified by the user.
     """
     outF = input('Enter output file: ')
     cMap.save(outfile=outF)


def main():
     dataF = getData()
     latColName, lonColName = getColumnNames()
     lat, lon = getLocale()
     cityMap = folium.Map(location = [lat,lon], tiles = 'cartodbpositron',zoom_start=11)
     dotAllPoints(cityMap,dataF,latColName,lonColName)
     markAndFindClosest(cityMap,dataF,latColName,lonColName,lat,lon)
     writeMap(cityMap)


if __name__ == "__main__":
     main()
