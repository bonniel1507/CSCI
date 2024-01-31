// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: Lab1B - Find the smaller of three integers.

#include <iostream>
using namespace std;

int main() {
    // Ask for user input
    int num1;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    // Ask for user input
    int num2;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    // Ask for user input
    int num3;
    cout << "Enter the second number: " << endl;
    cin >> num3;
    // Compare
    cout << "The smaller of the three is ";
    if (num1 < num2 && num1 < num3){
        cout << num1 << endl;
    } else if (num2 < num1 && num2 < num3){
        cout << num2 << endl;
    } else {
        cout << num3 << endl;
    }

    return 0;
}
