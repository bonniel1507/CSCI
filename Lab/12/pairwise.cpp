// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 12d

#include <iostream>
#include <vector>
using namespace std;

vector<int> sumPairWise(vector<int> &v1, vector<int> &v2){
    vector<int> v3;
    while(v1.size() > v2.size()){
        v2.push_back(0);
    }
    while(v1.size() < v2.size()){
        v1.push_back(0);
    }
    for(int i = 0; i < v1.size(); i++){
        v3.push_back(v1[i] + v2[i]);
    }
    return v3;
}

int main() {
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};

    vector<int> v3 = sumPairWise(v1, v2); // returns [5, 7, 3]

    for(int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }

    return 0;
}
