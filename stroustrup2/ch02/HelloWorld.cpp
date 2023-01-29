// HelloWorld.cpp
// Output "Hello, World!" to the console
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    cout << "Please enter your first and last name: ";
    string firstName;
    string lastName;
    cin >> firstName >> lastName;
    cout << "Hello, " << firstName << " " << lastName << "!" << endl;

    //cin.get();
}