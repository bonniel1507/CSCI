// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: 10a

#include <iostream>
using namespace std;

class Time {
public:
    int h;
    int m;
};

int minutesSinceMidnight(Time time){
    return time.h * 60 + time.m;
}

int minutesUntil(Time earlier, Time later){
    return minutesSinceMidnight(later) - minutesSinceMidnight(earlier);
}

int main() {

    Time t1, t2;

    cout << "Enter first time: ";
    cin >> t1.h >> t1.m;
    cout << "Enter second time: ";
    cin >> t2.h >> t2.m;

    cout << "These moments of time are " << minutesSinceMidnight(t1) << " and " << minutesSinceMidnight(t2) << " minutes after midnight." << endl;
    cout << "The interval between them is " << minutesUntil(t1, t2) << " minutes." << endl;

    return 0;
}
