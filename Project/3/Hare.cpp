// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: project 3

// #include <iostream>
#include <cstdlib>
#include "Hare.hpp"
using namespace std;

Hare::Hare(){

    patterns.push_back(0);
    patterns.push_back(0);
    patterns.push_back(9);
    patterns.push_back(9);
    patterns.push_back(-12);
    patterns.push_back(1);
    patterns.push_back(1);
    patterns.push_back(1);
    patterns.push_back(-2);
    patterns.push_back(-2);
    position = 0;
}
/*
After calling default constructor, data member patterns is {0,0,9,9,-12,1,1,1,-2,-2}
After calling default constructor, data member position is 0
*/
       //a typical hare that sleeps 20% of the time,
       //move 9 squares to the right 20% of the time,
       //move 12 squares to the left 10% of the time,
       //move 1 square to the right 30% of the time,
       //move 2 squares to the left 20% of the time.

Hare::Hare(std::vector<int> patterns, int position){
    this->patterns = patterns;
    this->position = position;
}
/*
After calling constructor Hare(std::vector<int>, int), data member patterns is {1,-2,6}
After calling constructor Hare(std::vector<int>, int), data member position is 2
*/

Hare::Hare(int* arr, int size, int position){
    for(int i = 0; i < size; i++){
        patterns.push_back(arr[i]);
    }
    this->position = position;
}
/*
After calling constructor Hare(int*, int, int), data member patterns is {1,1,2,-3,5}
After calling constructor Hare(int*, int, int), data member position is 6
*/

void Hare::move(){
    position += patterns[rand() % patterns.size()];
}
// After calling move method, data member position is 1

int Hare::getPosition() const{
    return position;
}
// After setting hare’s position to be 10 and calling getPosition method, data member position is 10

void Hare::setPosition(int position){
    this->position = position;
}
// After hare.setPosition(3); data member position is 3
