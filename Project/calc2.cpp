// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: Project 1

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <ctime>
using namespace std;

int main() {
    ifstream fin("problems.csv");
    if(fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }
    string junk;
    getline(fin, junk);

    string txt, ans;
    char sign, grade;
    double percent;
    int input, numQuestions = 0, numCorrect = 0;

    while (getline(fin, txt, ',') && getline(fin, ans)){
        cout << " what is " << txt << "? ";
        cin >> input;
        
        // compare user input and answer
        if(input == stof(ans)){
            cout << "true" << endl;
            numCorrect += 1;
        } else {
            cout << "false" << endl;
        }
        numQuestions += 1;
    }

    percent = (numCorrect*100 / numQuestions);
    cout << "percentage correct: " << percent << "%" << endl;

    if(percent >= 90){
        grade = 'A';
    } else if(percent >= 80){
        grade = 'B';
    } else if(percent >= 70){
        grade = 'C';
    } else if(percent >= 60){
        grade = 'D';
    } else {
        grade = 'F';
    }
    cout << "letter grade: " << grade << endl;

    return 0;
}