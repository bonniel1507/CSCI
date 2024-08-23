#Name: Bonnie Lei 
#Email: bonnie.lei49@myhunter.cuny.edu
#Write a program that asks the user for a list of nouns (separated by spaces) and approximates the fraction that are plural by counting the fraction that end in "s". Your program should output the total number of words and the fraction that end in "s". Assume that words are separated by spaces (and ignore the possibility of tabs and punctuation between words.)

nouns = input("Enter nouns: ")
num = int(1)
num2 = int(0)

for i in range(len(nouns)):
    if nouns[i] == " ":
        num += 1
    if nouns[i-1] == "s" and nouns[i] == " ":
        num2 += 1

if nouns[len(nouns)-1] == "s":
    num2 += 1

print("Number of words:  " + str(num))       
print("Fraction of your list that is plural is " + str(num2/num))
