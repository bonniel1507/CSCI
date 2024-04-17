// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 11c

#include <iostream>
using namespace std;

class Profile {
private:
    string username;
    string displayname;
public:
    // Profile constructor for a user (initializing
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

Profile::Profile(string usrn, string dspn){
    username = usrn;
    displayname = dspn;
}
    // Default Profile constructor (username="", displayname="")
Profile::Profile(){
    username = "";
    displayname = "";
}

string Profile::getUsername(){
    return username;
} // returns the username

string Profile::getFullName(){
    return displayname + " (@" + username + ")";
} // returns the string in the format “displayname (@username)”

void Profile::setDisplayName(string dspn){
    displayname = dspn;
} // allows to change the displayname property

class Network {
private:
    static const int MAX_USERS = 20;
    int numUsers;
    Profile profiles[MAX_USERS];
    bool following[MAX_USERS][MAX_USERS];    // new
    int findID (string usrn);
public:
    Network();
    bool addUser(string usrn, string dspn);
    bool follow(string usrn1, string usrn2); // new
    void printDot();                         // new
};

Network::Network(){
    numUsers = 0;
}

int Network::findID (string usrn){
    for(int i = 0; i < MAX_USERS; i++){
        if(usrn == profiles[i].getUsername()){
            return i;
        }
    }
    return -1;
}

bool Network::addUser(string usrn, string dspn){
    for(int i = 0; i < usrn.length(); i++){
        if(iswalnum(usrn[i]) == 0){
            return false;
        }
    }
    if(findID(usrn) != -1){
        return false;
    } else {
        if(numUsers <= 19){
            profiles[numUsers] = Profile{usrn, dspn};
            numUsers++;
            return true;
        } else {
            return false;
        }
    }
}

bool Network::follow(string usrn1, string usrn2){
    if(findID(usrn1) == -1 || findID(usrn2) == -1){
        return false;
    } else {
        following[findID(usrn1)][findID(usrn2)] = true;
        return true;
    }
}

void Network::printDot(){
    cout << "digraph {" << endl;

    for(int i = 0; i < numUsers; i++){
        cout << "\t\"@" << profiles[i].getUsername() << "\"" << endl;
    }

    for(int i = 0; i < numUsers; i++){
        for(int j = 0; j < numUsers; j++){
            if(following[i][j]){
                cout << "\t\"@" << profiles[i].getUsername() << "\" -> \"@" << profiles[j].getUsername() << "\"" << endl;
            }
        }
    }
    cout << "}" << endl;
}
/*
digraph {
  "@mario"
  "@luigi"
  "@yoshi"

  "@mario" -> "@luigi"
  "@luigi" -> "@mario"
  "@luigi" -> "@yoshi"
  "@yoshi" -> "@mario"
}
*/

int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");

    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}
