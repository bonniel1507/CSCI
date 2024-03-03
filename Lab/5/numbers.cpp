// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 5a

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

int main() {

    int get;
    // ask for user input
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // int num2;
    // cout << "Enter a number: ";
    // cin >> num2;

    // print
    // if(isPrime(num)){
    //     cout << "Yes" << endl;
    // } else {
    //     cout << "No" << endl;
    // }

    // get = nextPrime(num);
    // cout << get << endl;

    // task D
    int num1;
    cout << "Enter a number: ";
    cin >> num1;

    int num2;
    cout << "Enter a number: ";
    cin >> num2;

    // print
    get = countPrimes(num1, num2);
    cout << get << endl;

    return 0;
}
