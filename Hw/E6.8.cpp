// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: e6.8

#include <iostream>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size){

    if(a_size != b_size){
        return false;
    } else {
        for(int i = 0; i < a.size(); i++){
            if(a[i] != b[i]){
                return false;
            }
        }
    }
    return true;
}

int main() {


    return 0;
}
