/*
    Section 19 - Read File 1
    Test for file open and simple read of 3 data items
*/
#include <iostream>
#include <fstream>

int main() {
    std::ifstream in_file;      // create file stream object
    std::string line;           // a string to read from input file
    int num;                    // a number to read
    double total;               // another number to read

    in_file.open("./data/test.txt");    // open existing file from local storage

    if (!in_file) {
        std::cerr << "Error: could not open file" << std::endl;
        return 1;
    }

    std::cout << "Success: file opened and good to go" << std::endl;

    std::getline(in_file, line);
    in_file >> num >> total;

    std::cout << line << " " << num << " " << total;
    std::cout << std::endl;

    in_file.close();

    return 0;
}