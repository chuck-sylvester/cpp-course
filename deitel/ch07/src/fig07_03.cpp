/*
    Fig. 7.3: fig07_03.cpp
    Initializing an array's elements to zero and printing the array
*/

#include <iostream>
#include <iomanip>
#include <array>

int main() {
    // create modern C++ integer array with 5 values
    std::array<int, 5> myArray {32, 27, 64, 18, 95};

    std::cout << "\nElement" << std::setw(10) << "Value" << std::endl;

    // output each array element's value
    for (int i = 0; i < sizeof(myArray) / sizeof(int); i++) {
        std::cout << std::setw(7) << i << std::setw(10) << myArray[i] << std::endl;
    }

    // initialize all elements to 0
    for (size_t i{0}; i < myArray.size(); i++) {
        myArray[i] = 0;
    }

    std::cout << "\nElement" << std::setw(10) << "Value" << std::endl;

    // output each array element's value
    for (int i = 0; i < sizeof(myArray) / sizeof(int); i++) {
        std::cout << std::setw(7) << i << std::setw(10) << myArray[i] << std::endl;
    }

    std::cout << "\n----" << std::endl;
    std::cout << "sizeof(size_t):  " << sizeof(size_t) << std::endl;
    std::cout << "sizeof(int):     " << sizeof(int) << std::endl;
    std::cout << "sizeof(myArray): " << sizeof(myArray) << std::endl;
    std::cout << "myArray.size():  " << myArray.size() << std::endl;
}