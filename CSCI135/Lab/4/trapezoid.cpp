// Bonnie Lei 
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: task f

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
    if(h > (w+1)/2){
        cout << "Impossible shape!" << endl;
    } else {
        cout << "\nShape:";
        for(int i = 0; i < h; i++){
            cout << "\n";
            for(int j = 0; j < w; j++){
                if(j >= i && j < w-i){
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
    }

    return 0;
}
