#Name: Bonnie Lei 
#Email: bonnie.lei49@myhunter.cuny.edu
#Ask the user for the number of hours until the weekend

num = (int)(input("Enter number of hours: "))

days = (int)(num/24)
hours = num%24

print("Days: " + str(days))
print("Hours: " + str(hours))
