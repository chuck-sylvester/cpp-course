/*
    Buchalka CPP Course
    Section 19 - Challenge 2
    Automated Grader
*/
#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    std::string answerKey;
    std::string studentAnswer;
    std::string studentName;

    std::ifstream inputFile;
    inputFile.open("./data/responses.txt", std::ios::in);

    if (!inputFile) {
        std::cout << "Problem opening input file\n" << std::endl;
        std::cout << "exiting program with return code 1\n" << std::endl;
        return 1;
    }

    std::cout << "Success opening input file\n" << std::endl;

    // read answer key into variable and display each value
    inputFile >> answerKey;

    std::cout << "Answer Key:" << std::endl;

    for (int i = 0; i < answerKey.length(); i++) {
        std::cout << i+1 << ":" << answerKey.at(i) << " ";
    }
    std::cout << "\n" << std::endl;

    std::cout << std::setw(18) << std::left << "Student" << "Score" << std::endl;
    std::cout << "-----------------------" << std::endl;

    while (!inputFile.eof()) {
        inputFile >> studentName >> studentAnswer;
        std::cout << std::setw(18) << std::left << studentName << studentAnswer << std::endl;
    }
    std::cout << "-----------------------" << std::endl;
    std::cout << std::setw(20) << "Average score" << std::right << 3.6 << "\n" << std::endl;

    return 0;
}