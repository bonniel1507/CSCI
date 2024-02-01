// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: Lab1D - Number of days in a given month

#include <iostream>
using namespace std;

int main() {
    // Ask for user input
    int year;
    cout << "Enter year: ";
    cin >> year;

    // Ask for user input
    int month;
    cout << "Enter month: ";
    cin >> month;
    

    if(month == 2){
        if(year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)){
            cout << "29";
        } else {
            cout << "28";
        }
    } else if(month <= 7){
        if(month % 2 == 1){
            cout << "31";
        } else {
            cout << "30";
        }
    } else {
        if(month % 2 == 0){
            cout << "31";
        } else {
            cout << "30";
        }
    }
    cout << " days" << endl;

    return 0;
}