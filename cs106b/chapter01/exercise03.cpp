/*
 * Stanford CS106B - Chapter 1, Exercise 3
 * exercise03.cpp
 * --------------------------------------------------------------------------
 * Compute the sum of the numbers between 1 and 100.
 * The answer should be: 5050.
 */

#include <iostream>
using namespace std;

// Function prototypes
unsigned int getSum(unsigned int lower, unsigned int uppoer);

int main() {
    unsigned int lower_bound{1};
    unsigned int upper_bound{100};
    unsigned int sum_of_numbers;

    sum_of_numbers = getSum(lower_bound, upper_bound);
    cout << "Sum of numbers between " << lower_bound << " and " << upper_bound << " is " << sum_of_numbers << endl;
}

unsigned int getSum(unsigned int lower, unsigned int upper) {
    unsigned int sum{0};

    for (int i = lower; i <= upper; i++) {
        sum += i;
    }

    return sum;
}