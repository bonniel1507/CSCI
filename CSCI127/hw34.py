#Name: Bonnie Lei 
#Email: bonnie.lei49@myhunter.cuny.edu 
#Write a program that prompts the user to enter a list of names. Each person's name is separated from the next by a semi-colon and a space ('; ') and the names are entered lastName, firstName (i.e. separated by ', '). Your program should then print out the names, one per line, with the first names first followed by the last names.

names = input('Please enter your list of names: ').split(;)
names2 = names[:].split(, )
for i in range(names):
		print(names2[i][1] + " " + names2[i][0])
