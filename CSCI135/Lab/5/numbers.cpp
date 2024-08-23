// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 5

#include <iostream>
using namespace std;

// Task a
bool isDivisibleBy(int n, int d){
    // when d is 0
    if(d == 0){
        return false;
    }
    return (n%d == 0);
}

// Task b
bool isPrime(int n){

    // if n is less than 2
    if(n < 2){
        return false;
    }

    // loop
    for(int i = 2; i <= n/2; i++){
        if(isDivisibleBy(n, i)){
            return false;
        }
    }
    return true;
}

// Task c
int nextPrime(int n){
	int num;
    bool p;
	do {
        n++;
        p = isPrime(n);
        num = n;
    } while(p == false);
    return num;
}

// Task d
int countPrimes(int a, int b){
    int total = 0;

    for(int i = a; i <= b; i++){
        if(isPrime(i)){
            total++;
        }
    }

    return total;
}

// Task e
bool isTwinPrime(int n){
    if(isPrime(n) && (isPrime(n+2) || isPrime(n-2))){
        return true;
    }
    return false;
}

// Task f
int nextTwinPrime(int n){
    int num = n+1;

    while(isTwinPrime(num) == false) {
        num++;
    }

    return num;
}

// Task g
int largestTwinPrime(int a, int b){
    for(int i = b; i >= a; i--){
        if(isTwinPrime(i)){
            return i;
        }
    }
    return -1;
}

int main() {

    int number;
    bool yn;

    // ask for user input
    int num1;
    cout << "Enter a number: ";
    cin >> num1;

    // a, d, g
    int num2;
    cout << "Enter a number: ";
    cin >> num2;

    // task a
    // if(isDivisibleBy(num1, num2)){
    //     cout << "Yes" << endl;
    // } else {
    //     cout << "No" << endl;
    // }

    // task b
    // if(isPrime(num1)){
    //     cout << "Yes" << endl;
    // } else {
    //     cout << "No" << endl;
    // }

    // task c
    // number = nextPrime(num1);
    // cout << number << endl;

    // task D
    // number = countPrimes(num1, num2);
    // cout << number << endl;

    // task e
    // yn = isTwinPrime(num1);
    // cout << yn << endl;

    // task f
    // number = nextTwinPrime(num1);
    // cout << number << endl;

    // task g
    number = largestTwinPrime(num1, num2);
    cout << number << endl;

    return 0;
}
