// Data Structures and Algorithms in C++
// Section 01 - Big O
#include <iostream>
using namespace std;

// Function Declaration
void printItems1(int);
void printItems2(int);

int main() {
    printItems1(10);
    printItems2(10);
}

// Function printItems1 => O(n)
void printItems1(int n) {
    for (int i = 0; i < n; i++) {
        cout << i << endl;
    }

    cout << "\n----------\n\n";

    for (int j = 0; j < n; j++) {
        cout << j << endl;
    }
}

// Function printItems2 => O(n^2)
void printItems2(int n) {
    cout << "\n----------\n\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << j << endl;
        }
    }
}