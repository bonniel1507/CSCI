// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Write a C++ program that asks the user for a year, and continue asking until the number entered that is 2018 or earlier.

#include <iostream>
using namespace std;

int main() {
	int year;
	cout << "Enter year: ";
	cin >> year;
	do {
		cout << "Year must be 2018 or earlier" << endl;
		cout << "Enter year: ";
		cin >> year;
	} while (year > 2018);
	cout << "You entered: " << year;
	return 0;
}
