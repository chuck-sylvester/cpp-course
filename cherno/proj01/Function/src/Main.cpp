// Working with Functions
// Create a function that is called by main to:
//  - take in two integers
//  - multiply them by each other
//  - log the restults to the console
#include <iostream>

int Multiply(int num1, int num2);
void MultiplyAndLog(int num1, int num2);

int main() {
    MultiplyAndLog(3, 2);
    MultiplyAndLog(5, 5);
    MultiplyAndLog(90, 45);
}

int Multiply(int num1, int num2) {
    return num1 * num2;
}

void MultiplyAndLog(int num1, int num2) {
    int result = Multiply(num1, num2);
    std::cout << result << std::endl;
}