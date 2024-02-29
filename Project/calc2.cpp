// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: Project 1

#include <iostream>
#include <fstream>
#include <string>
#include <array>
// #include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    ifstream fin("problems.csv");
    if(fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

    string txt, ans;
    int numQuestions = 0;
    double numCorrect = 0;
    /**
// while (getline(fin, txt)){
    arraysize++
    stringstream fin(txt);
     getline(txt, eq, ','){
        //set equ into questions array
    }
    getline(txt, an){
        set text into answer array
    }
}

**/
    // while(getline(fin, txt, ',') && getline(fin, ans)){
    //     numQuestions++;
    // }
    // fin.close();
    // cout << numQuestions << endl;

    // string questions[numQuestions];
    // double answers[numQuestions];

    string questions[20];
    double answers[20];
    // for(int i = 0; i < numQuestions; i++){
    //     questions[i] = "";
    //     answers[i] = 0;
    // }
    // cout << questions[0] << endl;

    // int num = 0;
    while(getline(fin, txt, ',') && getline(fin, ans)){ //&& num <= sizeof(numQuestions)
        questions[numQuestions] = txt;
        answers[numQuestions] = stof(ans);
        numQuestions++;
    }
    fin.close();

    // cout << answers << endl;
    // cout << questions[0] << endl;
    int arraysize = sizeof(questions)/sizeof(questions[0]);

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

        if(numCorrect / numQuestions >= 60){
            cout << "At least 60% is correct. Stop." << endl;
            break;
        }
    }

    // percentage
    double percent;
    percent = (numCorrect*100 / numQuestions);
    cout << "percentage correct: " << percent << "%" << endl;

    // // letter grade
    // char grade;
    // if(percent >= 90){
    //     grade = 'A';
    // } else if(percent >= 80){
    //     grade = 'B';
    // } else if(percent >= 70){
    //     grade = 'C';
    // } else if(percent >= 60){
    //     grade = 'D';
    // } else {
    //     grade = 'F';
    // }
    // cout << "letter grade: " << grade << endl;

    return 0;
}
