// Fig. 2.13: fig02_13.cpp
// Comparing integers using if statement, relational operators,
// and equality operators.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// function main begins program execution
int main() {
    int number1 = 0; // first number initialized to 0;  "int number1{0}" didn't compile
    int number2 = 0; // second number initialized to 0; "int number2{0}" didn't compile

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