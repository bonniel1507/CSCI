// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: e6.18

/*
Write a function
  vector<int> append(vector<int> a, vector<int> b)
that appends one vector after another. For example, if a is
  1 4 9 16
and b is
  9 7 4 9 11
then append returns the vector
  1 4 9 16 9 7 4 9 11
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> append(vector<int> a, vector<int> b){
    vector<int> c;
    for(int i = 0; i < a.size(); i++){
        c.push_back(a[i]);
    }
    for(int i = 0; i < b.size(); i++){
        c.push_back(b[i]);
    }
    return c;
}

int main() {
    vector<int> a = {1, 4, 9, 16};
    vector<int> b = {9, 7, 4, 9, 11};

    vector<int> c = append(a, b);

    for(int i = 0; i < c.size(); i++){
        cout << c[i] << " ";
    }

    return 0;
}
