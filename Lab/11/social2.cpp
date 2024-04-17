// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 11b

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

// int main() {
//     Profile p1("marco", "Marco");
//     cout << p1.getUsername() << endl; // marco
//     cout << p1.getFullName() << endl; // Marco (@marco)

//     p1.setDisplayName("Marco Rossi");
//     cout << p1.getUsername() << endl; // marco
//     cout << p1.getFullName() << endl; // Marco Rossi (@marco)

//     Profile p2("tarma1", "Tarma Roving");
//     cout << p2.getUsername() << endl; // tarma1
//     cout << p2.getFullName() << endl; // Tarma Roving (@tarma1)
// }

class Network {
private:
    static const int MAX_USERS = 20; // max number of user profiles
    int numUsers;                    // number of registered users
    Profile profiles[MAX_USERS];     // user profiles array:
                                    // mapping integer ID -> Profile

    // Returns user ID (index in the 'profiles' array) by their username
    // (or -1 if username is not found)
    int findID (string usrn);
    public:
    // Constructor, makes an empty network (numUsers = 0)
    Network();
    // Attempts to sign up a new user with specified username and displayname
    // return true if the operation was successful, otherwise return false
    bool addUser(string usrn, string dspn);
};

Network::Network(){
    numUsers = 0;
} // a default constructor that creates an empty network. For now, setting numUsers = 0 is enough

    // Attempts to sign up a new user with specified username and displayname
    // return true if the operation was successful, otherwise return false
int Network::findID (string usrn){
    for(int i = 0; i < MAX_USERS; i++){
        if(usrn == profiles[i].getUsername()){
            return i;
        }
    }
    return -1;
}

bool Network::addUser(string usrn, string dspn){
                cout << "jhgf"<< usrn << " " << numUsers;
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
/*
This function receives the username and display name of a new user, the new user can be signed up only if the following conditions are met:
the new username usrn must be a non-empty alphanumeric string,
there is no other users in the network with the same username,
the array profiles is not full.
*/

int main() {
  Network nw;
  cout << nw.addUser("mario", "Mario") << endl;     // true (1)
  cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

  cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
  cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
  cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

  for(int i = 2; i < 20; i++)
      cout << nw.addUser("mario" + to_string(i),
                 "Mario" + to_string(i)) << endl;   // true (1)

  cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
}
