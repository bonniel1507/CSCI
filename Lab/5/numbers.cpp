// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 5a

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d){
    return (n%d == 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int num2;
    cout << "Enter a number: ";
    cin >> num2;

    if(isDivisibleBy(num, num2)){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
