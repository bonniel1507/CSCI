// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: e7.1

#include <iostream>
using namespace std;

void sort2(double* p, double* q){
    if(*p > *q){
        double temp = *p;
        *p = *q;
        *q = temp;
    }
}

int main() {

    double p , q;

    cout << "Enter a number: ";
    cin >> p;
    cout << "Enter a number: ";
    cin >> q;

    sort2(&p, &q);

    cout << p << endl;
    cout << q << endl;

    return 0;
}
