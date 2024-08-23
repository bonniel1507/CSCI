// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: E3.5

#include <iostream>
using namespace std;

int main() {

    int num1;
    cout << "Enter a number: ";
    cin >> num1;

    int num2;
    cout << "Enter a number: ";
    cin >> num2;

    int num3;
    cout << "Enter a number: ";
    cin >> num3;

    if(num1 > num2 && num2 > num3){
        cout << "Decreasing" << endl;
    } else if(num1 < num2 && num2 < num3){
        cout << "Increasing" << endl;
    } else {
        cout << "Neither" << endl;
    }
    return 0;
}