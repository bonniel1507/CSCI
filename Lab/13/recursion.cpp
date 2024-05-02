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
    if(size == 0){
        return arr[0];
    } else {
        return arr[size-1] + sumArray(arr, size-2);
    }
}

int main() {
    printRange(-2, 10);

    return 0;
}
