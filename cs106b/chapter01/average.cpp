// average.cpp
// Stanford CS106B
// Prompt for three floating-point values and display their average

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n1, n2, n3;
    double average;

    cout << "This program averages three floating-point numbers." << endl;

    cout << "1st number: ";
    cin >> n1;

    cout << "2nd number: ";
    cin >> n2;

    cout << "3rd number: ";
    cin >> n3;

    cout << "You entered: " << n1 << ", " << n2 << ", " << n3 << endl;

    average = (n1 + n2 + n3) / 3.0;
    cout << "The average is " << average << endl;
}