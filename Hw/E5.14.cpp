// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: e5.14

#include <iostream>
using namespace std;

void sort2(int a, int b){
	if(a > b){
		swap(a, b);
	}
}

int main() {

	int a = 9, b = 3;
	sort2(a, b);
	cout << a;

	return 0;
}
