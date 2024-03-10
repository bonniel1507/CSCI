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

// string removeBackSpaces(string line){

// 	int s = 0;
// 	// loop through the string
// 	for(int i = line.length()-1; i >= 0; i--){
// 		if(isspace(line[i])){
// 			s++;
// 		} else {
// 			break;
// 		}
// 	}
// 	line = line.substr(0, line.length()-s+1);

// 	return line;
// }

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
	// print
	while(getline(cin, str, '\n')){
		str = removeLeadingSpaces(str);
		// str = removeBackSpaces(str);
		// decrease indent if there's a closing curly brackets
		// if(str[0] == '}'){
		indent -= countChar(str, '}');
		// }
		for(int i = 0; i < indent; i++){
			cout << "\t";
		}
		// increase indent if there's a closing curly brackets
		// if(str[str.length()-1] == '{'){
		indent += countChar(str, '{');
		// }
		cout << "-" << str << endl;
	}

    return 0;
}

/*
                int main(){
           // Hi, I'm a program!
int x = 1;
    for(int i = 0; i < 10; i++) {
cout << i;
          cout << endl;
 }
    }
*/
