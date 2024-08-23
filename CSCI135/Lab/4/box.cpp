// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: task a

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
    for(int i = 0; i < h; i++){
        cout << "\n";
        for(int j = 0; j < w; j++){
            cout << "*";
        }
    }

    return 0;
}
 