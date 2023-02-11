/*
    Buchalka CPP Course
    Section 19 - Challenge 2
    Automated Grader
*/
#include <iostream>
#include <fstream>
#include <iomanip>

// Function prototypes
int prepareInputFile(std::ifstream &fileName);

int main() {
    std::string answerKey;
    std::string studentAnswer;
    std::string studentName;
    int studentCount {};
    int studentScore {};
    int totalScore {};
    double averageScore {};

    std::ifstream inputFile;

    int rc = prepareInputFile(inputFile);
    if (rc == -1) {
        return -1;
    }

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
        studentCount++;
        inputFile >> studentName >> studentAnswer;
        for (int i = 0; i < 5; i++) {
            if (studentAnswer.at(i) == answerKey.at(i)) {
                studentScore++;
                totalScore++;
            }
        }
        std::cout << std::setw(22) << std::left << studentName << studentScore << std::endl;
        studentScore = 0;
    }
    std::cout << "-----------------------" << std::endl;

    averageScore = static_cast<double>(totalScore) / studentCount;
    std::cout << std::setw(20) << "Average score" << std::right << averageScore << "\n" << std::endl;

    return 0;
}

int prepareInputFile(std::ifstream &fileName) {
    fileName.open("./data/answers.txt", std::ios::in);

    if (!fileName) {
        std::cout << "Problem opening input file\n" << std::endl;
        return -1;
    } else {
        std::cout << "Success opening input file\n" << std::endl;
        return 0;
    }
}