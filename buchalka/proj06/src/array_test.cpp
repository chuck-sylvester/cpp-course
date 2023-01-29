/*
    Testing a couple of array manipulation functions
    to show how arrays passed in as arguments work.
*/

#include <iostream>
#include <array>
#include "array_functions.h"

int main() {
    std::cout << "\n[main]" << std::endl;

    /*
        Experiment #1 - passing in an array with a known subscript value
    */
    int my_array1[5] {};
    std::cout << my_array1 << std::endl; // address of array
    std::cout << my_array1[0];           // value of first element

    setArrayToFortyTwoV1(my_array1);

    std::cout << "[main]" << std::endl;
    std::cout << my_array1 << std::endl;
    std::cout << my_array1[0];

    std::cout << std::endl;

    /*
        Experiment #2 - passing in an array to function that does not,
        set the array size in the function signagure, but knows the array size
    */
    int my_array2[5] {};
    std::cout << my_array2 << std::endl; // address of array
    std::cout << my_array2[0];           // value of first element

    setArrayToFortyTwoV2(my_array2);

    std::cout << "[main]" << std::endl;
    std::cout << my_array2 << std::endl;
    std::cout << my_array2[0];

    std::cout << "\n" << std::endl;

    return 0;
}