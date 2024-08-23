// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Write a C++ program that asks the user for the month of the year (as a number), and prints
// "Happy Winter" if it is strictly before 3 or strictly larger than 11,
// "Happy Spring" if it is 3 or greater, but strictly before 7, and
// "Happy Summer" if it is 7 or greater, but strictly before 9, and
// "Happy Fall" otherwise.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter month (as a number): ";
    cin >> num;
    cout << "Happy ";
    if(3 <= num && num < 7){
        cout << "Spring";
    } else if(7 <= num && num < 9){
        cout << "Summer";
    } else if(9 <= num && num <= 11){
        cout << "Fall";
    } else {
        cout << "Winter";
    }
    return 0;
}
