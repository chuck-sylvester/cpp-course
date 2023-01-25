/*
    Buchalka C++ Course
    Section 11: Functions
    Coding Exercise 21: Using Functions from the cmath Library
*/

#include <iostream>
#include <cmath>
using namespace std;

// Function prototypes
void c_math_functions();

int main() {
    cout << "\nWelcome to the 'main' function." << endl;

    c_math_functions();

    return 0;
}

void c_math_functions() {
    cout << "\nWelcome to the 'c_math_functions' function." << endl;

    double bill_total {102.78};
    int number_of_guests {5};

    double individual_bill = bill_total / number_of_guests;

    double individual_bill_1 = floor(individual_bill);
    double individual_bill_2 = round (individual_bill);
    double individual_bill_3 = ceil(individual_bill);

    cout << "\nThe original value of individual bill is $" << individual_bill << endl;
    
    cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n"
         << "The individula bill at location 2 will be $" << individual_bill_2 << "\n"
         << "The individual bill at location 3 will be $" << individual_bill_3 << "\n"
         << endl;
}