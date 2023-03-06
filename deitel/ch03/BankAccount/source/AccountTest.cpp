/*
    Fig. 3.5: AccountTest.cpp
    Creating and manipulating an Account object
    Uses a constructor to initialize the name data member
*/
#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    // create two Account objects
    Account myAccount1 {"Jane Green"};
    Account myAccount2 {"John Blue"};

    // show that the initial value of myAccount's name is the empty string
    cout << "Initial account 1 name is: " << myAccount1.getName() << endl;
    cout << "Initial account 2 name is: " << myAccount2.getName() << endl;

    // prompt for and read name
    cout << "\nPlease enter the account name: ";
    string theName; 
    getline(cin, theName); // read a line of text
    myAccount1.setName(theName); // put theName in myAccount

    // display the name stored in object myAccount
    cout << "Name in object myAccount1 is:  " << myAccount1.getName() << "\n" << endl;
}

