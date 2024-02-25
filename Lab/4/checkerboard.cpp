// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: task b

#include <iostream>
using namespace std;

int main() {
    // declare variables
    int w, h;
    // user input
    cout << "Input width: ";
    cin >> w;
    cout << "Input height: ";
    cin >> h;
    // print
    cout << "\nShape:";
    for(int i = 0; i < h; i++){
        cout << "\n";
        for(int j = 0; j < w; j++){
            cout << "*";
        }
    }

    return 0;
}

// Write a program checkerboard.cpp that asks the user to input width and height and prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating).

// Example:
// Input width: 11
// Input height: 6
 
// Shape:
// * * * * * *
//  * * * * * 
// * * * * * *
//  * * * * *
// * * * * * *
//  * * * * *