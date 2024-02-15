// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 3b

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

    // declare variables
    string date;
    double eastSt, min = INT_MAX, max = INT_MIN;
    
    while(fin >> date >> eastSt) { 
		fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                            //ignorring the remaining columns 
        // compare
        if(eastSt < min) {
			min = eastSt;
        } 
        if(eastSt > max) {
			max = eastSt;
        }
    }  
    // print
    cout << "minimum storage in East basin: " << min << " billion gallons" << endl;
    cout << "MAXimum storage in East basin: " << max << " billion gallons" << endl;

    fin.close();

    return 0;
}
