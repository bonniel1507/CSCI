// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: 9a

#include <iostream>
#include <cmath>
using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p){
    return sqrt(pow((*p).x, 2) + pow((*p).y, 2) + pow((*p).z, 2));
}

int main() {

    Coord3D pointP = {10, 20, 30};
    cout << length(&pointP) << endl;

    return 0;
}
