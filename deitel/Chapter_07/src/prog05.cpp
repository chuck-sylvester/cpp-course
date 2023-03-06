/*
    Figure 7.5
    Set array s to the even integers from 2 to 10.
*/

#include <iostream>
#include <iomanip>
#include <array>

int main() {
    // using constant variable to specify array size
    const size_t arraySize {5};

    std::array<int, arraySize> values;

    // initialize array to even integers 2, 4, 6, 8, 10
    for (size_t i{0}; i < arraySize; i++) {
        values[i] = 2 + (2 * i);
    }

    std::cout << "Element" << std::setw(10) << "Value" << std::endl;

    // output array in tabular format
    for (size_t i{0}; i < arraySize; i++) {
        std::cout << std::setw(7) << i << std::setw(10) << values[i] << std::endl;
    }

    // prompt for 5 new integers to populate a new array
    std::array<int, arraySize> newArray;

    std::cout << "Please enter five integers: ";

    for (size_t j{0}; j < arraySize; j++) {
        std::cin >> newArray[j];
    }

    std::cout << "Element" << std::setw(10) << "Value" << std::endl;

    // output array in tabular format
    for (size_t j{0}; j < newArray.size(); j++) {
        std::cout << std::setw(7) << j << std::setw(10) << newArray[j] << std::endl;
    }

}