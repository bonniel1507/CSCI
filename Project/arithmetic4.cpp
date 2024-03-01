// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: Project 1

#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <ctime>
using namespace std;

int main() {
    ifstream fin("problems.csv");
    if(fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

    string txt, ans, questions[20];
    int numQuestions = 0;
    double numCorrect = 0, answers[20];

    // get question and answer into an array
    while(getline(fin, txt, ',') && getline(fin, ans)){ //&& num <= sizeof(numQuestions)
        questions[numQuestions] = txt;
        answers[numQuestions] = stof(ans);
        numQuestions++;
    }
    fin.close();

    srand(time(NULL));
    int ind;
    for(int i = 0; i < numQuestions; i++){
        // display question
        int q = numQuestions-i;
        ind = rand() % q;
        double input;
        cout << "(" << i+1 << ") what is " << questions[ind] << "? ";
        cin >> input;

        // compare user input and answer
        if(input == answers[ind]){
            cout << "true\n" << endl;
            numCorrect++;
        } else {
            cout << "false\n" << endl;
        }

        // swap
        string tempQ = questions[ind];
        double tempA = answers[ind];
        questions[ind] =  questions[q-1];
        answers[ind] = answers[q-1];
        questions[q-1] = tempQ;
        answers[q-1] = tempA;

        // break when reach 60% or higher
        if(numCorrect*100 / numQuestions >= 60){
            cout << "At least 60% is correct. Stop." << endl;
            break;
        }
    }
    // percentage
    double percent;
    percent = (numCorrect*100 / numQuestions);
    cout << "percentage correct: " << percent << "%" << endl;

    return 0;
}
