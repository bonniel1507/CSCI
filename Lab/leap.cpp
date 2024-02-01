// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: Lab1C - A leap year or a common year?

#include <iostream>
using namespace std;

int main() {
    // Ask for user input
    int year;
    cout << "Enter year: ";
    cin >> year;
    
    // Compare
    if (year % 400 == 0){
        cout << "Leap";
    } else if(year % 100 == 0) {
        cout << "Common";
    } else if(year % 4 == 0){
        cout << "Leap";
    } else {
        cout << "Common";
    }
    cout << " year" << endl;

    return 0;
}
