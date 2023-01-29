// Test program to see what kind of compiler warnings are presented
// Main.cpp
#include <iostream>
using namespace std;

int main() {
    int favoriteNumber;

    cout << "What's your favorite number between 1 and 100? ";
    cin >> favoriteNumber;
    cout << "Hey, " << favoriteNumber << " is my favorite number, too!" << endl;
}