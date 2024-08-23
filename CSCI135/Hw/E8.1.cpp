// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: e8.1

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ofstream fout("hello.txt");
    fout << "Hello, World!";
    fout.close();

    ifstream fin("hello.txt");
    string str; 
    getline(fin, str);
    cout << str;
    fin.close();

    return 0;
}