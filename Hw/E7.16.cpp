// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: e7.16

#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

double distance(Point a, Point b){
    return sqrt(pow(a.x - b.x, 2)+pow(a.y - b.y, 2));
}

int main() {

    Point point1, point2;

    cout << distance(point1, point1) << endl;

    return 0;
}
