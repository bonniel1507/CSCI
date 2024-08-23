// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Write a C++ program program that asks the user for a number and draws a triangle of that height and width using 'character graphics'.
// 1/5

#include <iostream>
using namespace std;

int main (){
	int num;
	cout << "Enter a number: " << endl;
	cin >> num;
	for(int i = 0; i < num; i++){
		for(int j = 0; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
