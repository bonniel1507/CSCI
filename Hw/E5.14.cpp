// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: e5.14

#include <iostream>
using namespace std;

void sort2(int& a, int& b){
	if(a > b){
		int temp = a;
		a = b;
		b = temp;
	}
}

int main() {

	int a, b;
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter a number: ";
	cin >> b;
	sort2(a, b);

	return 0;
}
