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

string arr[] = {"111", "222", "111", "444", "222", "444", "", ""};
bool barr[] = {false, false, false, false, false, false, false, false};

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

	printSeparatedLine(numSlots);
	for(int i = 0; i < numSlots; i++){
		if(bShown[i]){
			cout << "|" << setw(5) << values[i];
		} else {
			cout << "|" << setw(5) << "";
		}
	}
	cout << "|" << endl;
	printSeparatedLine(numSlots);
}

void MemoryGame::play() {
	randomize();
	display();

	int round = 0, pairs = 0, ind1 = numSlots+1, ind2 = numSlots+2;
	while(pairs < numPairs){
		for(int i = 0; i < 2; i++){
			round++;
			int input;
			cout << "Round " << round << ":" << endl;
			cout << "Enter a unflipped card in [0, " << numSlots-1 << "]: ";
			cin >> input;
			while(input < 0 || input >= numSlots || bShown[input]){
				if(bShown[input]){
					cout << "The card is flipped already. Re-enter: ";
				} else {
					cout << "input is not in [0, " << numSlots-1 << "]. Re-enter: ";
				}
				cin >> input;
			}
			bShown[input] = true;

			if(i == 0){
				ind1 = input;
			} else {
				ind2 = input;
			}

			if(values[ind1] != values[ind2] && i == 1){
				bShown[ind1] = false;
				bShown[ind2] = false;
			} else if(i == 1) {
				pairs++;
			}

			display();
		}
	}
	cout << "Congratulations! Found out all pairs in " << round << " rounds" << endl;
}
