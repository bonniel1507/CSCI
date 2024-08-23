// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: project 3

#include <iostream>
#include "Road.hpp"
using namespace std;

Road::Road(){
    for(int i = 0; i < 70; i++){
        blocks.push_back(' ');
    }
}

Road::Road(int length){
    if(length < 0){
        length = 70;
    }
    for(int i = 0; i < length; i++){
        blocks.push_back(' ');
    }
}

void Road::mark(int index, char ch){
    if(index > 0 && index <= blocks.size()){
        blocks[index] = ch;
    }
}

void Road::display() const{
    for(int i = 0; i < blocks.size(); i++){
        cout << blocks[i];
    }
    cout << endl;
}

int Road::length() const{
    return blocks.size();
}
