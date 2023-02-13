/*
    Working with Pointers
*/

#include <iostream>     // C++ stream library
#include <stdlib.h>     // C standard library

using namespace std;

int main() {
    int a {10};     // data variable
    int *p;         // address variable

    cout << "Sizeof(a) is: " << sizeof(a) << ". Value of a is: " << a << endl;
    cout << "Sizeof(p) is: " << sizeof(p) << ". Value of p is: " << p << endl;

    p = &a;
    cout << "Sizeof(p) is: " << sizeof(p) << ". Value of p is: " << p << endl;

    cout << "\nDereferencing pointer using '*p' to get value that p points to: " << *p << "\n" << endl;

    int *myPtr1;    // another address variable
    int *myPtr2;    // another address variable

    // C stye malloc function to allocate memory within the heap
    myPtr1 = (int *)malloc(5 * sizeof(int));
    cout << "Sizeof(myPtr1) is: " << sizeof(myPtr1) << ". Value of a is: " << myPtr1 << endl;

    // C++ style to perform the same function
    myPtr2 = new int[5];
    cout << "Sizeof(myPtr2) is: " << sizeof(myPtr2) << ". Value of a is: " << myPtr2 << endl;
    delete [] myPtr2;
    cout << "Sizeof(myPtr2) is: " << sizeof(myPtr2) << ". Value of a is: " << myPtr2 << endl;

    /*
        Demonstrating a pointer to an array
    */
    int myArray[5] {2, 4, 6, 8, 10};
    cout << "Sizeof(myArray) is: " << sizeof(myArray) << ". Value of myArray is: " << myArray << endl;

    cout << "\nValue of array elements: ";
    for (int num : myArray) {
        cout << num << " ";
    }
    cout << endl;

    cout << "\nValue of &myArray[0] is: " << &myArray[0] << endl;

    cout << endl;
    return 0;
}