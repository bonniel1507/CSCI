// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 7a

#include <iostream>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line){

	for(int i = 0; i < line.length(); i++){
		if(!isspace(line[i])){
			line = line.substr(i);
			break;
		}
	}

	return line;
}

int main() {

	string line;
	cout << "Enter a string: ";
	getline(cin, line);
	cout << removeLeadingSpaces(line) << endl;

    return 0;
}
