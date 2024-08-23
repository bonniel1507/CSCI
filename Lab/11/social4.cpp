// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 11d

#include <iostream>
using namespace std;

struct Post{
    string username;
    string message;
};

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

Profile::Profile(){
    username = "";
    displayname = "";
} // Default Profile constructor (username="", displayname="")

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
    bool following[MAX_USERS][MAX_USERS];
    static const int MAX_POSTS = 100;         // new
    int numPosts;                             // new
    Post posts[MAX_POSTS];                    // new
    int findID (string usrn);
public:
    Network();
    bool addUser(string usrn, string dspn);
    bool follow(string usrn1, string usrn2);
    void printDot();
    bool writePost(string usrn, string msg);  // new
    void printTimeline(string usrn);          // new changed bool to void
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
        cout << "  \"@" << profiles[i].getUsername() << "\"" << endl;
    }
    for(int i = 0; i < numUsers; i++){
        for(int j = 0; j < numUsers; j++){
            if(following[i][j]){
                cout << "  \"@" << profiles[i].getUsername() << "\" -> \"@" << profiles[j].getUsername() << "\"" << endl;
            }
        }
    }
    cout << "}" << endl;
}

bool Network::writePost(string usrn, string msg){
    if(findID(usrn) == -1 || numPosts == 100){
        return false;
    } else {
        posts[numPosts] = Post{usrn, msg};
        numPosts++;
        return true;
    }
} // adds a new post to the posts array. It performs successfully if the username is found in the network and the posts array is not full, in this case the function also should return true. Otherwise, nothing is added and the function returns false.

void Network::printTimeline(string usrn){ // changed bool to void
    for(int i = numPosts-1; i >= 0; i--){
        if(posts[i].username == usrn || following[findID(usrn)][findID(posts[i].username)]){
            cout << profiles[findID(posts[i].username)].getFullName() << ": " << posts[i].message << endl;
        }
    }
}
/*
prints out the timeline of the user usrn. The timeline of a user is the list of all posts by the user and by the people they follow, presented in reverse-chronological order. They should be printed in the following format:

Displayname (@username): message
Displayname (@username): message
Displayname (@username): message
Displayname (@username): message
*/

int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    nw.follow("mario", "luigi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");

    // write some posts
    nw.writePost("mario", "It's a-me, Mario!");
    nw.writePost("luigi", "Hey hey!");
    nw.writePost("mario", "Hi Luigi!");
    nw.writePost("yoshi", "Test 1");
    nw.writePost("yoshi", "Test 2");
    nw.writePost("luigi", "I just hope this crazy plan of yours works!");
    nw.writePost("mario", "My crazy plans always work!");
    nw.writePost("yoshi", "Test 3");
    nw.writePost("yoshi", "Test 4");
    nw.writePost("yoshi", "Test 5");

    cout << endl;
    cout << "======= Mario's timeline =======" << endl;
    nw.printTimeline("mario");
    cout << endl;

    cout << "======= Yoshi's timeline =======" << endl;
    nw.printTimeline("yoshi");
    cout << endl;
}
