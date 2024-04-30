// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: project 3

#include <iostream>
#include "Competition.hpp"
using namespace std;

Competition::Competition(){
    rabbit = new Hare();
    tor = new Tortoise();
    lane = new Road();
}
/*
In the default constructor, data member rabbit is an object instantiated by default constructor of Hare class; data member tor is an object instantiated by default constructor of Tortoise class; and lane is an object instantiated by default constructor of Road class.
*/

Competition::Competition(Hare coney, Tortoise cooter, int length){
    rabbit = coney;
    tor = cooter;
    lane.Road(length);
}
/*
In the non-default constructor, data member rabbit is set to be the formal parameter coney, data member tor is set to be the formal parameter cooter, and data member lane is an object instantiated by non-default constructor of Road class that takes the formal parameter length in non-default constructor of Competition class as an actual parameter.
*/

void Competition::play(){
    int finish = lane.length();
    int round = 1;

    while(rabbit.getPosition() < finish || tor.getPosition() < finish){
        rabbit.move();
        if(rabbit.getPosition() < 0){
            rabbit.setPosition(0);
        } else if(rabbit.getPosition() > finish){
            rabbit.setPosition(finish - 1);
        }
        lane.mark(rabbit.getPosition(), 'H');

        tor.move();
        if(tor.getPosition() < 0){
            tor.setPosition(0);
        } else if(tor.getPosition() > finish){
            tor.setPosition(finish - 1);
        }
        lane.mark(tor.getPosition(), 'T');

        cout << round << lane.display();
        if(rabbit.getPosition() == tor.getPosition()){
            cout << "Ouch. Tortoise bites hare." << endl;
        }

        lane.Road(finish);
        round++;
    }

    if(rabbit.getPosition() == tor.getPosition()){
        cout << "It is a tie." << endl;
    } else if(rabbit.getPosition() > tor.getPosition()){
        cout << "Yuck. Hare wins." << endl;
    } else {
        cout << "" << endl;
    }
}
/*
i. Find out the last block of the road.
ii. Declare and initialize integer variable round to be 1.
iii. Compete as long as neither rabbit nor tor reaches the last block of lane.
    A. rabbit moves. If, after move, rabbit’s position is smaller than the index of the first block of lane, place rabbit to the first block of lane, otherwise, if rabbit’s position is larger than the index of the last block of lane, place rabbit on the last block of lane.
    Hint: when we talk about moving rabbit to a specific block of lane, what method in Hare class should we use?
    When rabbit sets feet on a block, it leaves mark ‘H’ on the corresponding block of lane. Which method of Road class can be called?
    B. Move tortoise tor. Mark its position on the road by ‘T’.
    C. Display round number and also the values of each element of lane.
    D. It may happen that rabbit and tor may step on the same block of lane. In that case, assume that rabbit is the first animal to move in each round, then lane can only keep the most recent mark left by the contestants, that is ‘T’. In that case, print “Ouch. Tortoise bites hare.” in a separated line.
    E. Prepare for the next round by cleaning the mark left by the current round. Which method of road class should be called?
    F. Increase round by 1.
iv. Print competition result: tie, hare wins, or tortoise wins.
*/

/*
Here is a sample output.
1 H T
2 H T
3 H T
4 H T
5 H T
6 T H
7 H T
8 T
Ouch! Tortoise bites hare.
9 HT
10 T H
11 T H
12 T H
13 T H
14 T H
15 T H
16 T H
17 TH
18 T
Ouch! Tortoise bites hare.
19 TH
20 T
Ouch! Tortoise bites hare.
21 T H
22 T H
Yuck. Hare wins.
*/
