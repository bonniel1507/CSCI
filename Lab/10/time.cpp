// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: 10b

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

Time addMinutes(Time time0, int min){
    Time n;

    n.h = (minutesSinceMidnight(time0) + min) / 60;
    n.m = (minutesSinceMidnight(time0) + min) % 60;

    return n;
}

int main() {

    // a
    // Time t1, t2;

    // cout << "Enter first time: ";
    // cin >> t1.h >> t1.m;
    // cout << "Enter second time: ";
    // cin >> t2.h >> t2.m;

    // cout << "These moments of time are " << minutesSinceMidnight(t1) << " and " << minutesSinceMidnight(t2) << " minutes after midnight." << endl;
    // cout << "The interval between them is " << minutesUntil(t1, t2) << " minutes." << endl;

    // b
    Time t1, t2;
    cout << "Enter time: ";
    cin >> t1.h >> t1.m;

    int min;
    cout << "Enter minutes: ";
    cin >> min;

    t2 = addMinutes(t1, min);
    cout << t2.h << ":" << t2.m << endl;

    return 0;
}
