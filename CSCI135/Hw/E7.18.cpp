// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: e7.18

#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

struct Triangle {
    Point p1;
    Point p2;
    Point p3;
};

double distance(Point a, Point b){
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

double perimeter(Triangle t){
    return (distance(t.p1, t.p2) + distance(t.p2, t.p3) + distance(t.p1, t.p3));
}

int main() {

    Triangle t;

    cout << perimeter(t) << endl;

    return 0;
}
