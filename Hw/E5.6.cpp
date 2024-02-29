// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: e5.6

#include <iostream>
#include <string>
using namespace std;

string middle(string str){

    string mid = str.substr(str.length()/2,1);

    if(str.length() % 2 == 0){
        mid = str.substr(str.length()/2-1,2);
    }
    return mid;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string mid = middle(str);
    cout << mid << endl;

    return 0;
}
