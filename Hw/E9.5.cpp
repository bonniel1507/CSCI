// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: e9.5

#include <iostream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;
};

Rectangle(int w, int h){
    width = w;
    height = h;
}

float get_perimeter(){
    return (2*width) + (2*height);
}

float get_area(){
    return width * height;
}

void resize(double factor){
    width *= factor;
    height *= factor;
}

int main() {


    return 0;
}
