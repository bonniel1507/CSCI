// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: e6.20

/*
Write a function
  vector<int> merge_sorted(vector<int> a, vector<int> b)
that merges two sorted vectors, producing a new sorted vector. Keep an index into
each vector, indicating how much of it has been processed already. Each time,
append the smallest unprocessed element from either vector, then advance the index.
For example, if a is
  1 4 9 16
and b is
  4 7 9 9 11
then merge_sorted returns the vector
1 4 4 7 9 9 9 11 16
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

vector<int> merge_sorted(vector<int> a, vector<int> b){
    vector<int> c = append(a, b);
    for(int i = 1; i < c.size(); i++){
        for(int j = 0; j < c.size()-i; j++){
            int temp = c[j];
            if(c[j] > c[j+1]){
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }
    return c;
}

int main() {
    vector<int> a = {1, 4, 9, 16};
    vector<int> b = {9, 7, 4, 9, 11};

    vector<int> c = merge_sorted(a, b);

    for(int i = 0; i < c.size(); i++){
        cout << c[i] << " ";
    }

    return 0;
}
