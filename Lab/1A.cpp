// Bonnie Lei
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: Lab1A - Find the smaller of two integers.

#include <iostream>
using namespace std;

int main() {

    int num1;
	cout << "Enter the first number: " << endl;
	cin >> num1;

    int num2;
	cout << "Enter the second number: " << endl;
	cin >> num2;

    cout << "The smaller of the two is ";
    if (num1 > num2){
        cout << num1;
    } else {
        cout << num2;
    }

	return 0;
}