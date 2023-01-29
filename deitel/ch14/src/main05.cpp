/*
    Deitel 10E - Chapter 14: File Processing
    Reading and printing a sequential file
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>

// Function prototypes
void outputLine(int account, const std::string &name, double balance);

int main() {
    // ifstream constructor opens a file
    std::ifstream myFile("./target/clients.txt", std::ios::in);

    // exit program if ifstream could not open file
    if (!myFile) {
        std::cerr << "File could not be opened" << std::endl;
        exit(EXIT_FAILURE);
    }

    // print header row
    std::cout << std::left << std::setw(10) << "Account" << std::setw(13)
        << "Name" << "Balance\n" << std::fixed << std::showpoint;

    int account;        // account number
    std::string name;   // account owner name
    double balance;     // account balance 

    // display each record in the file
    while (myFile >> account >> name >> balance) {
        outputLine(account, name, balance);
    }
}

void outputLine(int account, const std::string &name, double balance) {
    std::cout << std::left << std::setw(10) << account << std::setw(13) << name
        << std::setw(7) << std::setprecision(2) << std::right << balance <<std::endl;
}