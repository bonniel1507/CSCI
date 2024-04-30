// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 12c

#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n){
    vector<int> v;
    for(int i = 0; i < n; i++){
        v.push_back(i);
    }
    return v;
}

vector<int> goodVibes(const vector<int> v){
    vector<int> e;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > 0){
            e.push_back(v[i]);
        }
    }
    return e;
}

void gogeta(vector<int> &goku, vector<int> &vegeta){
    while(vegeta.size() > 0){
        goku.push_back(vegeta[0]);
        vegeta.erase(vegeta.begin());
    }
}

int main() {
// comment
// comment

    vector<int> v1{1,2,3};
    vector<int> v2{4,5};

    gogeta(v1, v2); // v1 is now [1,2,3,4,5] and v2 is empty.

    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }

    return 0;
}
