// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: 10c

#include <iostream>
using namespace std;

class Time {
public:
    int h;
    int m;
};

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie {
public:
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot {
public:
    Movie movie;     // what movie
    Time startTime;  // when it starts
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



void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts){
    Time t = addMinutes(ts.startTime, ts.movie.duration);
    printMovie(ts.movie);
    cout << " [starts at " << ts.startTime.h<< ":" << ts.startTime.m << ", ends by " << t.h << ":" << t.m << "]" << endl;
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    Time t = addMinutes(ts.startTime, ts.movie.duration);
    TimeSlot n = {nextMovie, t};
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
    // Time t1, t2;
    // cout << "Enter time: ";
    // cin >> t1.h >> t1.m;

    // int min;
    // cout << "Enter minutes: ";
    // cin >> min;

    // t2 = addMinutes(t1, min);
    // cout << t2.h << ":" << t2.m << endl;

    // c
    // Movie m1;
    // m1.title = "Back to the Future";
    // m1.genre = COMEDY;
    // m1.duration = 116;

    // // TimeSlot t1;
    // // t1.movie = m1;
    // // t1.startTime =

    // TimeSlot t2 = {m1, {12,16}};

    // printTimeSlot(t2);

    return 0;
}
