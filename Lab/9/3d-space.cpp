// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: 9c

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

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if(length(*p1) > length(*p2)){
        return *p1;
    } else {
        return *p2;
    }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){

}

int main() {
    // a
    // Coord3D pointP = {10, 20, 30};
    // cout << length(&pointP) << endl;

    // b
    // Coord3D pointP = {10, 20, 30};
    // Coord3D pointQ = {-20, 21, -22};

    // cout << "Address of P: " << &pointP << endl;
    // cout << "Address of Q: " << &pointQ << endl << endl;

    // Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);

    // cout << "ans = " << ans << endl;

    // c
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4

    return 0;
}
