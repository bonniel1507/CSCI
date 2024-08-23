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
    
	// declare variables
    string date, date1;
    double eastSt;
    
	// ask user for date
    cout << "Enter date: ";
    cin >> date1;

    while(fin >> date >> eastSt){
        fin.ignore(INT_MAX, '\n');  //skips to the end of line, 
        
		// print east storage
        if(date1 == date) {
            getline(fin, date);
            cout << "East basin storage: " << eastSt << " billion gallons" << endl;
        }
    }
    fin.close();
}
