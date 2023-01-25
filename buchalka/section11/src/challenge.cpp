/*
    Buchalka C++ Course
    Section 11 - Challenge
    -------------------------------------------------------------------
    Using a collection (list) of integers and manipulating them.
    Create a menu of options for users
    Break functionality into functions
    Collect the functions in a header file
*/

#include <iostream>
#include <vector>
#include "challenge.h"

int main() {
    std::vector<int> numbers;

    std::cout << "\nWelcome to the numbers program!\n" << std::endl;
    
    displayMenu();
    char menuChoice = getMenuChoice();

    while (menuChoice != 'Q') {
        switch (menuChoice) {
            case 'P':
                printNumbers(numbers);
                break;
            case 'A':
                addNumber(numbers);
                break;
            case 'M':
                getMean(numbers);
                break;
            case 'S':
                getSmallest(numbers);
                break;
            case 'L':
                getLargest(numbers);
                break;
            case 'C':
                clearNumbers(numbers);
                break;
            
            default:
                break;
        }

        displayMenu();
        menuChoice = getMenuChoice();
    }

    std::cout << "Exiting program. Goodbye.\n" << std::endl;
    
    return 0;
}