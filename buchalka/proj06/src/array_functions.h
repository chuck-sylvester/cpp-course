/*
    A couple array manipulation functions
    used by a calling test program.
*/

#include <iostream>
#include <array>

void setArrayToFortyTwoV1(int numbers[5]) {
    std::cout << "\n[][setArrayToFortyTwoV1]" << std::endl;

    for (int i = 0; i < 5; i++) {
        numbers[i] = 42;
    }
}

void setArrayToFortyTwoV2(int numbers[]) {
    std::cout << "\n[][setArrayToFortyTwoV2]" << std::endl;

    for (int i = 0; i < 5; i++) {
        numbers[i] = 42;
    }
}
