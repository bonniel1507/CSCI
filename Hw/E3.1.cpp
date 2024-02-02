// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: E3.1

#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter number: ";
    cin >> num;
    if(num > 0){
        cout << "Positive" << endl;
    } else if(num == 0){
        cout << "Zero" << endl;
    } else {
        cout << "Negative" << endl;
    }
    return 0;
}