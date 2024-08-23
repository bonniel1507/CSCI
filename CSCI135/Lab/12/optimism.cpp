// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 12b

#include <iostream>
#include <vector>
using namespace std;

vector<int> goodVibes(const vector<int> v){
    vector<int> e;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > 0){
            e.push_back(v[i]);
        }
    }
    return e;
}

int main() {
    vector<int> v{1,2,-1,3,4,-1,6};

    goodVibes(v); // returns [1,2,3,4,6]

    return 0;
}
