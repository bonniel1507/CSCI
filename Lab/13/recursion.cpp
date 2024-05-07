// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab13a

#include <iostream>
using namespace std;

void printRange(int left, int right){
    if(left <= right){
        cout << left << " ";
        printRange(left+1, right);
    }
}

int sumRange(int left, int right){
    if(left > right){
        return 0;
    } else if(left == right){
        return left;
    } else {
        return left + sumRange(left+1, right);
    }
}

int sumArray(int *arr, int size){
    if(size == 1){
        return arr[0];
    } else {
        return arr[size-1] + sumArray(arr, size-1);
    }
}

bool isAlphanumeric(string s){
    if(s.length() == 0){
        return true;
    } else {
        return (iswalnum(s[0]) && isAlphanumeric(s.substr(1, s.length())));
    }
}

bool nestedParens(string s){
    if(s.length() == 0){
        return true;
    } else {
        if(s[0] == '(' && s[s.length()-1] == ')' ){
            return nestedParens(s.substr(1, s.length()-2));
        } else {
            return false;
        }
    }
}

int main() {
    cout << nestedParens("((()))") << endl;      // true (1)
    cout << nestedParens("()") << endl;          // true (1)
    cout << nestedParens("") << endl;            // true (1)

    cout << nestedParens("(((") << endl;         // false (0)
    cout << nestedParens("(()") << endl;         // false (0)
    cout << nestedParens(")(") << endl;          // false (0)
    cout << nestedParens("a(b)c") << endl;       // false (0)

    return 0;
}
