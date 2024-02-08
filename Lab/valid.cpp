// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: Lab 2a

#include <iostream>
using namespace std;

int main() {
    // ask for user input
    int num;
    cout << "Please enter an integer: ";
    cin >> num;
    // check if num is in range
    while(0 >= num || num >= 100){
        cout << "Please re-enter: ";
        cin >> num;
    }
    // print square number
    cout << "Number squared is " << num * num << endl;

    return 0;
}