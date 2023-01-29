/*
    Figure 14.2 (new 10E book)
    Create a sequential file
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

int main() {
    // ofstream constructor opens file for output
    std::ofstream myFile("./target/clients.txt", std::ios::out);

    // exit program if unable to create file
    if (!myFile) {
        std::cerr << "File could not be opened" << std::endl;
        exit(EXIT_FAILURE); // expands to 1
    }

    std::cout << "Enter the account ID, account name, and account balance.\n"
        << "Enter end-of-file (control-d) to end input.\n? ";
    
    int accountID {};
    std::string accountName {};
    double accountBalance {};

    // set precision (total number of digits) for myFile
    myFile << std::setprecision(12);

    // read input values from cin and place in file
    while (std::cin >> accountID >> accountName >> accountBalance) {
        myFile << accountID << ' ' << accountName << ' ' << accountBalance << std::endl;
        std::cout << "? ";
    }

    myFile.close();

    std::cout << "\n" << sizeof(double) << std::endl;
    std::cout << "\nThank you and have a nice day!\n" << std::endl;
}