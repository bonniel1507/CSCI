// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 6a

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Input: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++){
        cout << str[i] << " " << (int)str[i] << endl;
    }

    return 0;
}
