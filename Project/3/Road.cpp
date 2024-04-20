// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: project 3

#include <iostream>
#include "Road.hpp"
using namespace std;

Road(){
    for(int i = 0; i < 20; i++){
        blocks.push_back('');
    }
}

Road(int length){
    if(length < 0){
        length = 20;
    }
    for(int i = 0; i < length; i++){
        blocks.push_back('');
    }
}

void mark(int index, char ch){
    if(index > 0 && index <= blocks.size()){
        blocks[index] = ch;
    }
}

void display() const{
    for(int i = 0; i < blocks.size(); i++){
        cout << blocks[i];
    }
}

int length() const{
    return blocks.size();
}
