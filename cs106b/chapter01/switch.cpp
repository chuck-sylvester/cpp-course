// switch.cpp
// Demonstrate the use of a switch statement to determine
// whether or not an argument is a vowel.

#include <iostream>
using namespace std;

// Function prototypes declared up front
bool IsVowel(char c);

// Main function
int main() {
    if (IsVowel('z')) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}

// Function: IsVowel
bool IsVowel(char c) {
    switch (toupper(c)) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return true;
        default:
            return false;
    }   
}