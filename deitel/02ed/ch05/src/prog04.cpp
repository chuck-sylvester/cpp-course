/*
    Deitel CPP 2ed, Chapter 5
    Learning about pointers using the * and & operators
*/

#include <iostream>

using namespace std;

int main() {
    int a;              // a is an integer
    int *aPtr;          // aPtr is a pointer to an integer

    a = 7;
    aPtr = &a;          // aPtr set to address of a

    cout << "\nThe address of a is " << &a
         << "\nThe value of aPtr is " << aPtr;

    cout << "\n\nThe value of a is " << a
         << "\nThe value of *aPtr is " << *aPtr;

    cout << "\n\nShowing that * and & are inverse of each other."
         << "\n&*aPtr = " << &*aPtr
         << "\n*&aPtr = " << *&aPtr << "\n" << endl;

    return 0;
}