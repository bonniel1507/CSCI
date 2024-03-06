// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: e5.15

#include <iostream>
using namespace std;

void sort2(int& d, int& e){
	// smaller number in front
	if(d > e){
		int temp = d;
		d = e;
		e = temp;
	}
}

void sort3(int& a, int& b, int& c){
	sort3(a, b);
	sort3(b, c);
	sort3(a, c);
}

int main() {

	int a, b, c;
	// user input
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter a number: ";
	cin >> b;
	cout << "Enter a number: ";
	cin >> c;
	// smallest to greatest
	sort3(a, b, c);

	return 0;
}
