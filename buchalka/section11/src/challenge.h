/*
    Functions to support Challenge
*/

#include <vector>

void displayMenu() {
    std::cout << "\nFun with Numbers" << std::endl;
    std::cout <<   "-------------------------------" << std::endl;
    std::cout <<   "P - Print numbers" << std::endl;
    std::cout <<   "A - Add a number" << std::endl;
    std::cout <<   "M - Display mean of the numbers" << std::endl;
    std::cout <<   "S - Display the smallest number" << std::endl;
    std::cout <<   "L - Display the largest number" << std::endl;
    std::cout <<   "R - Remove all elements from list" << std::endl;
    std::cout <<   "C - Clear screen" << std::endl;
    std::cout <<   "Q - Quit" << std::endl;
    std::cout <<   "-------------------------------" << std::endl;
    std::cout <<   "Enter your choice: ";
}

char getMenuChoice() {
    char menuChoice {};
    std::cin >> menuChoice;

    switch (menuChoice)
    {
    case 'P':
    case 'p':
        break;
    case 'A':
    case 'a':
        break;
    case 'M':
    case 'm':
        break;
    case 'S':
    case 's':
        break;
    case 'L':
    case 'l':
        break;
    case 'R':
    case 'r':
        break;
    case 'C':
    case 'c':
        break;
    case 'Q':
    case 'q':
        break;
    default:
        std::cout << "Invalid entry, try again\n" << std::endl;
        break;
    }

    return toupper(menuChoice);
}

void printNumbers(const std::vector<int> &numbers) {
    if (numbers.size() == 0) {
        std::cout << "[] - the list is empty" << std::endl;
    } else {
        std::cout << "[ ";
        for (auto i : numbers) {
            std::cout << i << " ";
        }
        std::cout << "]\n" << std::endl;
    }
}

void addNumber(std::vector<int> &numbers) {
    int number_to_add {};

    std::cout << "Enter a number to add to the list: ";
    std::cin >> number_to_add;

    numbers.push_back(number_to_add);
    std::cout << "\n" << number_to_add << " added\n" << std::endl;
}

void getMean(const std::vector<int> &v) {
    if (v.size() == 0) {
        std::cout << "Unable to calculate mean - list is empty\n" << std::endl;
    } else {
        int total {};
        for (auto num : v) {
            total += num;
        }
        double mean = static_cast<double>(total) / v.size();
        std::cout << "The mean is: " << mean << std::endl;
    }
}

void getSmallest(const std::vector<int> &v) {
    if (v.size() == 0) {
        std::cout << "There are no numbers in the list\n" << std::endl;
    } else {
        int smallestNumber = v.at(0);
        for (int num : v) {
            if (num < smallestNumber) {
                smallestNumber = num;
            }
        }
        std::cout << "The smallest number is: " << smallestNumber << "\n" << std::endl;
    }
}

void getLargest(const std::vector<int> &v) {
    if (v.size() == 0) {
        std::cout << "There are no numbers in the list\n" << std::endl;
    } else {
        int largestNumber = v.at(0);
        for (int num : v) {
            if (num > largestNumber) {
                largestNumber = num;
            }
        }
        std::cout << "The largest number is: " << largestNumber << "\n" << std::endl;
    }
}

void removeNumbers(std::vector<int> &v) {
    v.clear();
}

void clearScreen() {
    std::cout << "\n\n\nFiguring out how to clear the screen... try again later\n\n\n" << std::endl;
}