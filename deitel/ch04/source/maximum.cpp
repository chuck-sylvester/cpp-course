/*
    Deitel CPP HTP
    Learning about Functions
    ---------------------------------------------------------------------------
    Write a function that prompts the user for three integers and rturns
    the value of the highest integer. For example: maximum(22, 85, 17)
    returns 85.
*/

#include <iostream>
using namespace std;

// Function prototypes
int maximum(int num1, int num2, int num3);

int main() {
    cout << endl;
    cout << "[main]" << endl;


    int num1 {}, num2 {}, num3 {};
    int max_integer {};

    cout << "Initial value of integers is: " << num1 << " " << num2 << " " << num3 << endl;

    cout << "Please enter three integers: ";
    cin >> num1 >> num2 >> num3;
    cout << "User entered integer values: " << num1 << " " << num2 << " " << num3 << endl;

    max_integer = maximum(num1, num2, num3);

    cout << "[main]" << endl;
    cout << "The highest integer value is " << max_integer << endl;
}

int maximum(int num1, int num2, int num3) {
    cout << "[maximum]" << endl;
    cout << "Calculating..." << endl;

    int max {num1}; // assume first number is highest

    if (num2 > max) {
        max = num2;
    }

    if (num3 > max) {
        max = num3;
    }

    return max;
}