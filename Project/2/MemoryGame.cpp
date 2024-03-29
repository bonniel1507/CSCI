// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: project 2

#include <iostream>
#include <ctime>
#include <string>
using namespace std;

#include "MemoryGame.hpp"
#include <iomanip>

MemoryGame::MemoryGame() {
//TODO: place your code here
	numPairs = 3;
	numSlots = 8;

	string *arr = new string[numSlots];
	bool *arr2 = new bool[numSlots];

	// srand(time(NULL));
	for(int i = 0; i < numSlots; i+=2){
		if(i >= numPairs*2){
			break;
		}

		string r = to_string(rand() % 1000);
		arr[i] = r;
		arr[i+1] = r;
		arr2[i] = false;
		arr2[i+1] = false;
	}

	this->values = arr;
	this->bShown = arr2;
}

MemoryGame::MemoryGame(int numPair, int numSlot) {
//TODO: place your code here
	if(!(numPair <= 0 || numSlot <= 0 || numSlot < numPair*2)){
		numPairs = numPair;
		numSlots = numSlot;
	} else {
		numPairs = 3;
		numSlots = 8;
	}

	string *arr = new string[numSlots];
	bool *arr2 = new bool[numSlots];

	// srand(time(NULL));
	for(int i = 0; i < numSlots; i+=2){
		if(i >= numPairs*2){
			break;
		}

		string r = to_string(rand() % 1000);
		arr[i] = r;
		arr[i+1] = r;
		arr2[i] = false;
		arr2[i+1] = false;
	}

	this->values = arr;
	this->bShown = arr2;
}

MemoryGame::MemoryGame(string* words, int size, int numSlot) {
//TODO: place your code here
	if(numSlot <= 0 || numSlot < size*2){
		numSlots = size*2;
	} else {
		numSlots = numSlot;
		numPairs = size;
	}

	string *arr = new string[numSlots];
	bool *arr2 = new bool[numSlots];

	for(int i = 0; i < numSlots; i+=2){
		if(i >= numPairs*2){
			break;
		}

		arr[i] = words[i/2];
		arr[i+1] = words[i/2];
		arr2[i] = false;
		arr2[i+1] = false;
	}

	this->values = arr;
	this->bShown = arr2;
}

MemoryGame::~MemoryGame() {
	//TODO: place your code here
	delete[] values;
	values = nullptr;

	delete[] bShown;
	bShown = nullptr;
}

void MemoryGame::randomize() {
//TODO: placeholder, do not need to implement in Task A
	for(int i = numSlots; i > 0; i--){
		int ind = rand() % i;
		string temp = values[ind];
		values[ind] = values[i-1];
		values[i-1] = temp;
	}
}

void printSeparatedLine(int size) {
	cout << "+"; //the first +
	//draw -----+ for (size) many times
	for (int i = 0; i < size; i++)
	cout << "-----+";

	cout << endl;
}

// int length2(int num){
// 	int l = 0;
// 	while(num != 0){
// 		l++;
// 		num /= 10;
// 	}
// 	return l;
// }

void MemoryGame::display() const {
//TODO: placeholder, do not need to implement in Task A
//print labels
	cout << " ";
	for (int i = 0; i < numSlots; i++)
	cout << setw(3) << i << setw(3) << " ";
	//setw(3) before i means i occupies 3-character,
	//For example, if i has only two digits,
	//then pad a space to its left.
	cout << endl;

	string arr[] = {"111", "222", "333", "444", "555", "666", "777", "", ""};

	printSeparatedLine(numSlots);
	for(int i = 0; i < numSlots; i++){
		cout << "|" << setw(5) << arr[i];
		// if(arr[i] == ""){//values[i] == ""){
		// 	cout << "   ";
		// } else {
		// 	// cout << values[i];
			// cout << 5-arr[i].length();
		// }
	}
	cout << "|" << endl;
	printSeparatedLine(numSlots);
}
