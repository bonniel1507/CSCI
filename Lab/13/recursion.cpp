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

int main() {
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    cout << "Sum is " << sum1 << endl;  // Sum is 43

    int sum2 = sumArray(arr, 5); // Add up first five elements
    cout << "Sum is " << sum2 << endl;  // Sum is 34

    delete[] arr;

    return 0;
}
