// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: project 2

// #include <iostream>
// #include <ctime>
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

// void printArray(string arr[], int size){
// 	cout << "hI" << endl;

// 	for(int i = 0; i < size; i++){
// 		cout << arr[i] << " ";
// 	}
// }

void MemoryGame::randomize() {
//TODO: placeholder, do not need to implement in Task A
// cout << numSlots << endl;
	// int size = sizeof(values) / sizeof(values[0]);
	// cout << size << endl;

	for(int i = numSlots; i > 0; i--){
		int ind = rand() % i;
		string temp = values[ind];
		values[ind] = values[i-1];
		values[i-1] = temp;
		//cout << values[i-1] << endl;

	}
	// printArray(values, size);


	/*
	In this task, we will randomize the elements in data member array values, whether the elements are numbers or strings.
	Based on the code of Task A, define randomize function. The idea is similar to the randomization process of Project 1 Task D.
	1. Initialize size to be the number of elements of array values, which is saved in data member ... (you find this out).
	2. Generate a random index in [0, size). Swap the element at chosen index with the last element in values.
	3. Then reduce size by 1 so that we do not consider the already-chosen element, which resides in the last element of values.
	4. Continue Step 2-3 until size is 1 (why not 0? Hint: do we need to randomize if there is only one element left in the array to be randomized?) Said differently, as long as size is larger than 1, run codes in Steps 2-3.
	*/
}

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
}
