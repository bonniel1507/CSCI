// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: 

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

    string date, start, end;
    double eastEl, westEl;

    cout << "Enter starting date: " << endl;
    cin >> start;
    cout << "Enter ending date: " << endl;
    cin >> end;

    while(fin >> date >> eastEl >> westEl) { 
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                            //ignorring the remaining columns 

        // while(date >= start && date <= end){
            cout << date;
            if(eastEl > westEl) {
                cout << " East" << endl;
            } else if(eastEl < westEl) {
                cout << " West" << endl;
            } else {
                cout << " Equal" << endl;
            }
        // } 
    }

    fin.close();

    return 0;
}