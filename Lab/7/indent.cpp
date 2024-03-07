// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 7

#include <iostream>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line){

	// loop through the string
	for(int i = 0; i < line.length(); i++){
		if(!isspace(line[i])){
			line = line.substr(i);
			break;
		}
	}

	return line;
}

int countChar(string line, char c){

	int num = 0;
	for(int i = 0; i < line.length(); i++){
		if(line[i] == c){
			num++;
		}
	}

	return num;
}

int main() {

	// user input
	string line;
	string line2;
	// print
	while(getline(cin, line)){
		line2 += removeLeadingSpaces(line);
	}
	cout << line2 << endl;

	cout << countChar(line2, '{') << endl;

    return 0;
}
