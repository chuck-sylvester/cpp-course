/*
    Learning about references
    A "reference" is a nickname (alias) given to a variable.
*/
#include <iostream>

using namespace std;

int main() {
    int num1 {10};
    int &ref {num1};

    cout << endl;

    cout << "The value of &num1 is: " << &num1 << ". The value of num1 is: " << num1 << endl;
    cout << "The value of &ref is:  "  << &ref << ". The value of ref is:  " << ref << endl;

    ref++;
    cout << "The value of &num1 is: " << &num1 << ". The value of num1 is: " << num1 << endl;
    cout << "The value of &ref is:  "  << &ref << ". The value of ref is:  " << ref << endl;

    num1++;
    cout << "The value of &num1 is: " << &num1 << ". The value of num1 is: " << num1 << endl;
    cout << "The value of &ref is:  "  << &ref << ". The value of ref is:  " << ref << endl;

    cout << endl;

    return 0;
}