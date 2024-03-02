// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 5a

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d){
    // when d is 0
    if(d == 0){
        return false;
    }
    return (n%d == 0);
}

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

int nextPrime(int n){
	int num;
	do {
        n++;
        isPrime(n);
    } while(is Prime == false)
    return num;
}

int main() {
    // ask for user input
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // int num2;
    // cout << "Enter a number: ";
    // cin >> num2;

    // print
    if(isPrime(num)){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
