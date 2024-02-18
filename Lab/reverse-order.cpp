// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 3d

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
    string date, start, end, dates[100];
    double eastSt, eastEl, westSt, westEl, west[100];
    int num;

    // user input
    cout << "Enter starting date: " << endl;
    cin >> start;
    cout << "Enter ending date: " << endl;
    cin >> end;
    // random commet
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){ 
        fin.ignore(INT_MAX, '\n');  //skips to the end of line, 
                                    //ignorring the remaining columns 
        // store into arrat
        if(date >= start && date <= end){
            num++;
            dates[num] = date;
            west[num] = westEl;
            // num++;
        }
    }
    // print
    for(int i = num; i > 0; i--){
        cout << dates[i] << " " << west[i] << " ft" << endl;
    }
    fin.close();

    return 0;
}