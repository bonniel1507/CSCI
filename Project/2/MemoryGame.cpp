// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: project 2

// #include <iostream>
// using namespace std;

#include "MemoryGame.hpp"

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

	// int j = 0;

	for(int i = 0; i < numSlots; i+=2){
		if(i >= numPairs*2){
			break;
		}

		arr[i] = words[i/2];
		arr[i+1] = words[i/2];
		arr2[i] = false;
		arr2[i+1] = false;
		// j++;
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
}

void MemoryGame::display() const {
//TODO: placeholder, do not need to implement in Task A
}
