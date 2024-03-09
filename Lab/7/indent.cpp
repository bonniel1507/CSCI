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

// int countLine(string line){
// 	int lines = 0;

// 	for(int i = 0; i < line.length(); i++){
// 		if(line[i] == '\n'){
// 			lines++;
// 		}
// 	}

// 	return lines;
// }

int main() {

	// user input
	string str, line1;
	int lines, indent = 0;
	// print

	/*
	step 1: tab by the number in the counter
	step 2: check for open curly brackets and add to the counter
	step 3: check for close curly brackets and decrease from the counter
	step 4: print removing space line
	step ?: check to see if the very first char after the spaces is a closing curly brackets
	*/

	// string line[8];
	// int ind = 0;


	while(getline(cin, str, '\n')){
		// line1 += removeLeadingSpaces(str);
		// line[ind] = removeLeadingSpaces(str);
		// ind++;
		str = removeLeadingSpaces(str);
		cout << str << endl;
		for(int i = 0; i < indent; i++){
			cout << "\t";
		}
		indent += countChar(str, '{');
		indent -= countChar(str, '}');
	}

	// lines = countLine(line1);

	// for(int i = 0; i < 8; i++){
	// 	cout << line[i] << endl;
	// }

	// for(int i = 0; i < indents; i++){
	// 	cout << "\t";
	// }


	// cout << indent << endl;

	// string line[lines];

	// cout << line1 << endl;

	// indent = countChar(line2, '{') << endl;

    return 0;
}
