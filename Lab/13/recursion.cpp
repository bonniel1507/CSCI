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

bool d(int *prices, int size, int j, int k){
    if(size == 0){
        return j == k;
    }
    if(d(prices + 1, size - 1, j + prices[0], k)){
        return true;
    }
    if(d(prices + 1, size - 1, j, k + prices[0])){
        return true;
    }
    return false;
}

bool divisible(int *prices, int size){
    return d(prices, size, 0, 0);
}

int main() {
    int prices [] = {10, 15, 12, 18, 19, 17, 13, 35, 33};

    cout << divisible(prices, 9) << endl;

    return 0;
}
