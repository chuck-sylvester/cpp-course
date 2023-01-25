/*
    Arrays and Vectors
*/

#include <iostream>
#include <iomanip>
#include <vector>

int main() {
    std::vector<char> vowels(5);                     // constructor syntax to establish 5 elements
    std::vector<int> test_scores(10);                // constructor syntax to establish 10 integers and set to zero
    std::vector<double> temperatures {34.0, 92.5};   // declary and initialize

    std::cout << vowels.size() << std::endl;
    std::cout << vowels.capacity() << std::endl;

    for (auto vowel : vowels) {
        std::cout << "Vowel: " << vowel << std::endl;
    }

    for (auto vowel : vowels) {
        std::cout << "Vowel: " << int(vowel) << std::endl;
    }

    vowels[0] = 'a';
    vowels[1] = 'e';
    vowels[2] = 'i';
    vowels[3] = 'o';
    vowels[4] = 'u';

    for (auto vowel : vowels) {
        std::cout << "Vowel: " << vowel << std::endl;
    }

    for (size_t i = 0; i < vowels.size(); i++) {
        std::cout << "Vowel " << i << " is: " << vowels.at(i) << std::endl;
    }

    std::cout << "----" << std::endl;
    
    vowels.push_back('y');

    for (size_t i = 0; i < vowels.size(); i++) {
        std::cout << "Vowel " << i << " is: " << vowels.at(i) << std::endl;
    }

    std::cout << test_scores.size() << std::endl;
    std::cout << test_scores.capacity() << std::endl;

    std::cout << temperatures.size() << std::endl;
    std::cout << temperatures.capacity() << std::endl;

    for (auto temp : temperatures) {
        std::cout << "Temperature: " << std::setw(8) << std::setprecision(5) << temp << std::endl;
    }


}