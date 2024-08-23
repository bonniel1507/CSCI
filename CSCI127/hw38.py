# Name:
# Date:
# A program that uses functions to print out months.

def monthString(monthNum):

     month = ["January", "February", "March", "April", "May", "June", "July", "AUgust", "September", "October", "November", "December"]
     monthString = month[monthNum-1]

	return(monthString)

def main():
	n = int(input('Enter the number of the month: '))
	mString = monthString(n)
     print('The month is', mString)

if __name__ == "__main__":
	main()
