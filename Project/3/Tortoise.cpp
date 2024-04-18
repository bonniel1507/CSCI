// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: project 3

#include <cstdlib>
#include "Tortoise.hpp"
using namespace std;

Tortoise::Tortoise(){
    patterns.push_back(3);
    patterns.push_back(3);
    patterns.push_back(3);
    patterns.push_back(3);
    patterns.push_back(3);
    patterns.push_back(-6);
    patterns.push_back(-6);
    patterns.push_back(1);
    patterns.push_back(1);
    patterns.push_back(1);
    position = 0;
}
/*
50% 3 squares to the right
Slip 20% 6 squares to the left
Slow plod 30% 1 square to the right
*/
Tortoise::Tortoise(std::vector<int> patterns, int position){
    this->patterns = patterns;
    this->position = position;
}

Tortoise::Tortoise(int* arr, int size, int position){
    for(int i = 0; i < size; i++){
        patterns.push_back(arr[i]);
    }
    this->position = position;
}

void Tortoise::move(){
    position += patterns[rand() % patterns.size()];
}

int Tortoise::getPosition() const{
    return position;
}

void Tortoise::setPosition(int position){
    this->position = position;
}
