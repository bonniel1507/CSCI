// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Write a C++ program that converts kilometers to miles. Your program should prompt the user for the number of kilometers and then print out the number of miles. A useful formula: miles = 0.621371* kilometers.
  
#include <iostream>
using namespace std;

int main ()
{
	double km;
	cout << "Enter kilometers: ";
	cin >> km;
	double mile = km*0.621371;
	cout << "The miles are " << mile;
	return 0;
}
