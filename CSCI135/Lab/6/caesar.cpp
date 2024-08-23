// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 6b

#include <iostream>
#include <cctype>
using namespace std;

char shiftChar(char c, int rshift){

    // if(65 <= (int)c && (int)c <= 90){
    //     c += rshift;
    //     if((int)c > 90){
    //         c -= 26;
    //     }
    // } else if(97 <= (int)c && (int)c <= 122){
    //     c += rshift;
    //     if((int)c > 122){
    //         c -= 26;
    //     }
    // }

    // skip puntuation
    if(65 <= c && c <= 90){
        if(c + rshift > 90){
            c -= 26; // wrap
        }
        c += rshift;
    } else if(97 <= c && c <= 122){
        if(c + rshift > 122){
            c -= 26; // wrap
        }
        c += rshift;
    }
    return c;

}

string encryptCaesar(string plaintext, int rshift){

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

    // print
    cout << "Ciphertext: " << encryptCaesar(str, shift) << endl;

    return 0;
}
