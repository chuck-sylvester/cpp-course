// Stanford CS106B
// Chapter 01 Exercise 1
// -------------------------
// Write a program that reads in a temperature in degrees Celsius and displays
// the corresponding temperature in degrees Fahrenheit. The conversion formula is
// F = 9/5C + 32

#include <iostream>
using namespace std;

// Function declarations
double getFahrenheit(double cTemp);

// Main function
int main() {
    // - get celcius temperature value from user
    // - use function to convert to fahrenheit
    // - print results

    double celciusTemperature;
    double fahrenheitTemperature;

    cout << "Please enter temperature in Celcius: ";
    cin >> celciusTemperature;
    cout << "You entered: " << celciusTemperature << endl;

    fahrenheitTemperature = getFahrenheit(celciusTemperature);
    cout << "The corresponding temperature in Fahrenheit is: " << fahrenheitTemperature << endl;
}

// Supporting Functions
double getFahrenheit(double cTemp) {
    double fTemp = ((9.0/5.0) * cTemp) + 32;
    return fTemp;
}


