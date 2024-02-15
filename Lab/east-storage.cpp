// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 3a

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    ifstream fin("Current_Reservoir_Levels.tsv");
    if(fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    string junk;        // new string variable
    getline(fin, junk); // read one line from the file

    string date;
    double eastSt;

    cout << "Enter date: ";
    cin >> date;

    while(fin >> date >> eastSt){//}>> eastEl >> westSt >> westEl) { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
        
        fin.ignore(INT_MAX, '\n');  //skips to the end of line, 
        // cout << date << " " << eastSt << endl;   //ignorring the remaining columns
        cout << "East basin storage: " << eastSt << endl;

        // for example, to print the date and East basin storage:
        

        // if(date == startDate) {
        //     line++;
        // } else if(date > endDate) {
        //     break;
        // }

        // for(int i = 0; i < line; i++) {
        //     if(eastEl > westEl) {
        //         cout << date << " East" << endl;
        //     } else if(eastEl < westEl) {
        //         cout << date << " West" << endl;
        //     } else {
        //         cout << date << " Equal" << endl;
        //     }
        // } 
    }

    fin.close();
}