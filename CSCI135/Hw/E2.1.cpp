// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: E2.1

#include <iostream>
using namespace std;

int main() {

    double gas;
    cout << "Enter gallon of gas: ";
    cin >> gas;

    double fuel;
    cout << "Enter fuel efficiency: ";
    cin >> fuel;

    double price;
    cout << "Enter price per gallon: ";
    cin >> price;

    double cost = (100 / fuel) * price;
    double miles = gas * fuel;

    cout << "The cost of gas per 100 miles is " << cost << endl;
    cout << "Your car can go " << miles << " miles." << endl;

    return 0;
}