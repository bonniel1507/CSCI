// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 6c

#include <iostream>
#include <cctype>
using namespace std;

char shiftChar(char c, int rshift){

    // skip puntuations
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

string encryptVigenere(string plaintext, string keyword){

    int j = 0;
    for(int i = 0; i < plaintext.length(); i++){
        if(isalpha(plaintext[i])){ // pass in when it's an alphabet
            plaintext[i] = shiftChar(plaintext[i], (int)(keyword[(i-j)%keyword.length()]-97)); // -j to follow the keyword while skipping non alphabet
        } else {
            j++;
        }
    }

    return plaintext;
}

int main() {

    string str, key;

    // user input
    cout << "Enter plaintext: ";
    getline(cin, str); // doesn't stop at space

    cout << "Enter keyword: ";
    cin >> key;

    // print
    cout << "Ciphertext: " << encryptVigenere(str, key) << endl;

    return 0;
}
