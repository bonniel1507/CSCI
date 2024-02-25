// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: task e

#include <iostream>
using namespace std;

int main() {
    // declare variables
    int size;
    // user input
    cout << "Input side length: ";
    cin >> size;
    // print
    for(int i = 0; i < size; i++){
        cout << "\n";
        for(int j = 0; j < size; j++){
            if(j >= i){
                cout << "*";
            } else {
                cout << " ";
            }
        }
    }

    return 0;
}
 