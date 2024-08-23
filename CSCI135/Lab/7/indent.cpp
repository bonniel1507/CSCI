// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 7b

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
	string str;
	int indent = 0;

	/*
	step 1: tab by the number in the counter
	step 2: check for open curly brackets and add to the counter
	step 3: check for close curly brackets and decrease from the counter
	step 4: print removing space line
	step ?: check to see if the very first char after the spaces is a closing curly brackets
	*/

	// print
	while(getline(cin, str, '\n')){
		if(removeLeadingSpaces(str)[0] == '}'){
			for(int i = 0; i < indent-1; i++){
				cout << "\t";
			}
		} else {
			for(int i = 0; i < indent; i++){
				cout << "\t";
			}
		}

		indent += countChar(str, '{');
		indent -= countChar(str, '}');

		cout << removeLeadingSpaces(str) << endl;
	}

    return 0;
}
