/*
    Deitel - Chapter 13: Exception Handling
    A simple exception handling example.
    Check for divide-by-zero exceptions.
*/
#include <iostream>

/*
    Class DivideByZeroException to be used in exception handling for
    throwing an exception on a division by zero.
*/
class DivideByZeroException {
public:
    DivideByZeroException() : message("attempted to divide by zero") {
        // constructor
    }
    const char *what() const {
        return message;
    }

private:
    const char *message;
};

// Definition of quotient function.
// Demonstrate throwing an exception when a divide-by-zero exception is encountered.
double quotient(int numerator, int denominator) {
    if (denominator == 0) {
        throw DivideByZeroException();
    }

    return static_cast<double> (numerator) / denominator;
}

// Driver Program
int main() {
    int number1, number2;
    double result;

    std::cout << "Enter two integers (end-of-file to end): ";

    while (std::cin >> number1 >> number2) {
        try {
            result = quotient(number1, number2);
            std::cout << "The quotient is: " << result << std::endl;
        }
        catch (DivideByZeroException ex) {
            std::cout << "Exception occurred: " << ex.what() << std::endl;
        }

        std::cout << "Enter two integers (end-of-file to end): ";
    }

    std::cout << std::endl;
    return 0;
}