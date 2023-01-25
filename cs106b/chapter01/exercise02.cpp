// Stanford CS106B
// Chapter 01 Exercise 
// -------------------------
// Convert a distance in meters to the corresponding distance in feet and inches.
//   1 inch = 0.0254 meters
//   1 foot = 12 inches

#include <iostream>
using namespace std;

// Function declarations
int getInches(double distanceMeters);

int main() {
    // - prompt user for distance value in meters
    // - use function to convert to fee and inches
    // - display result

    double distanceMeters;
    double distanceInches;

    cout << "What is the distance in meters? ";
    cin >> distanceMeters;
    cout << "You entered: " << distanceMeters << endl;

    distanceInches = getInches(distanceMeters);
    cout << "Distance in inches: " << distanceInches << endl;

    cout << ((int)distanceInches / 12) << " Feet, " << ((int)distanceInches % 12) << " Inches." << endl;

}

int getInches(double distanceMeters) {
    return distanceMeters / 0.0254;
}
