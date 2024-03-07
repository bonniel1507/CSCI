// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 6d

#include <iostream>
#include <cctype>
using namespace std;

char shiftChar(char c, int rshift){

    // skip puntuation
    if(rshift > 0){
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
    } else if(rshift < 0){ // for decrypt
        if(65 <= c && c <= 90){
            if(c + rshift < 65){
                c += 26; // wrap
            }
            c += rshift;
        } else if(97 <= c && c <= 122){
            if(c + rshift < 97){
                c += 26; // wrap
            }
            c += rshift;
        }
    }

    return c;
}

string encryptCaesar(string plaintext, int rshift){

    // pass to shiftChar
    for(int i = 0; i < plaintext.length(); i++){
        plaintext[i] = shiftChar(plaintext[i] , rshift);
    }

    return plaintext;
}

string encryptVigenere(string plaintext, string keyword){

    int j = 0;
    // pass to shiftChar
    for(int i = 0; i < plaintext.length(); i++){
        if(isalpha(plaintext[i])){ // pass in when it's an alphabet
            plaintext[i] = shiftChar(plaintext[i], (int)(keyword[(i-j)%keyword.length()]-97)); // -j to follow the keyword while skipping non alphabet
        } else {
            j++;
        }
    }

    return plaintext;
}

string decryptCaesar(string ciphertext, int rshift){

    // pass to shiftChar
    for(int i = 0; i < ciphertext.length(); i++){
        ciphertext[i] = shiftChar(ciphertext[i] , rshift*(-1));
    }

    return ciphertext;
}

string decryptVigenere(string ciphertext, string keyword){

    int j = 0;
    // pass to shiftChar()
    for(int i = 0; i < ciphertext.length(); i++){
        if(isalpha(ciphertext[i])){ // pass in when it's an alphabet
            ciphertext[i] = shiftChar(ciphertext[i], (int)(keyword[(i-j)%keyword.length()]-97)*(-1)); // -j to follow the keyword while skipping non alphabet
        } else {
            j++;
        }
    }

    return ciphertext;
}

int main() {

    // user input
    string str, ciphertext;
    cout << "Enter plaintext: ";
    getline(cin, str); // doesn't stop at space

    // caesar
    cout << "\n= Caesar =\n";
    int shift;
    cout << "Enter shift: ";
    cin >> shift;
    ciphertext = encryptCaesar(str, shift);
    cout << "Ciphertext: " << ciphertext << endl;
    cout << "Decrypted: " << decryptCaesar(ciphertext, shift) << endl;

    // vigenere
    cout << "\n= Vigenere =\n";
    string key;
    cout << "Enter keyword: ";
    cin >> key;
    ciphertext = encryptVigenere(str, key);
    cout << "Ciphertext: " << ciphertext << endl;
    cout << "Decrypted: " << decryptVigenere(ciphertext, key) << endl;

    return 0;
}
