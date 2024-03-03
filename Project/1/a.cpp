// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: Project 1a

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    char operators[] = {'+', '-', '*', '/', '%'};
    int s = sizeof(operators) / sizeof(operators[0]);
    int idx = rand() % s;
    int num1 = rand()%10;
    char sign = operators[idx];
    int num2;
    int ans;

    // checking the sign for next step
    if(sign == '+'){
        num2 = rand()%10;
        ans = num1 + num2;
    } else if(sign == '-'){
        num2 = rand()%10;
        ans = num1 - num2;
    } else if(sign == '*'){
        num2 = rand()%10;
        ans = num1 * num2;
    } else if(sign == '/'){
        num2 = 1 + rand()%9;
        ans = num1 / num2;
    } else {
        num2 = 1+ rand()%9;
        ans = num1 % num2;
    }

    string inputs;
    cout << "What is " << num1 << " " << sign << " " << num2 << "? ";
    cin >> inputs;
    int input = stoi(inputs);
    // compare user input and answer
    if(input == ans){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
