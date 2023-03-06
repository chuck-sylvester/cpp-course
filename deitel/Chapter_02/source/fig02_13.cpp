// Fig. 2.13: fig02_13.cpp
// Comparing integers using if statement, relational operators,
// and equality operators.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int number1 {0};    // initializer format
    int number2 {0};    // initializer format

    cout << "Enter two integers to compare: ";
    cin >> number1 >> number2;

    if (number1 == number2) {
        cout << number2 << " == " << number2 << endl;
    }

    if (number1 != number2) {
        cout << number1 << " != " << number2 << endl;
    }

    if (number1 < number2) {
        cout << number1 << " < " << number2 << endl;
    }

    if (number1 > number2) {
        cout << number1 << " > " << number2 << endl;
    }

    if (number1 <= number2) {
        cout << number1 << " <= " << number2 << endl;
    }

    if (number1 >= number2) {
        cout << number1 << " >= " << number2 << endl;
    }
}