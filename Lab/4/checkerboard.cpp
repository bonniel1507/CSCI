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
        if(i%2==0){
            for(int j = 0; j < w; j++){
                if(j%2==0){
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        } else {
            for(int j = 0; j < w; j++){
                if(j%2==0){
                    cout << " ";
                } else {
                    cout << "*";
                }
            }
        }
    }

    return 0;
}