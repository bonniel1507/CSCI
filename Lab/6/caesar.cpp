// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 6b

#include <iostream>
#include <cctype>
using namespace std;

char shiftChar(char c, int rshift){

    c += rshift;

    return c;
}

string encryptCaesar(string plaintext, int rshift){
    // char c;

    for(int i = 0; i < plaintext.length(); i++){
        plaintext[i] = shiftChar(plaintext[i] , rshift);
    }

    return plaintext;

}

int main() {

    // user input
    string str;
    cout << "Enter plaintext: ";
    getline(cin, str); // doesn't stop at space

    int shift;
    cout << "Enter shift: ";
    cin >> shift;

    cout << encryptCaesar(str, shift) << endl;

    // print ASCII code
    // for(int i = 0; i < str.length(); i++){
    //     cout << str[i] << " " << (int)str[i] << endl;
    // }

    return 0;
}
