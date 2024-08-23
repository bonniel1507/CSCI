// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: task c

#include <iostream>
using namespace std;

int main() {
    // declare variables
    int size;
    // user input
    cout << "Input size: ";
    cin >> size;
    // print
    cout << "\nShape:";
    for (int i = 0; i < size; i++){
        cout << "\n";
        for (int j = 0; j < size; j++){
            if(j == i || j == size - i - 1){
                cout << "*";
            } else {
                cout << " ";
            }
        }
    }

    return 0;
}
