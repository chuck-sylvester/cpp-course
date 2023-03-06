// Fig. 7.11: fig07_11.cpp
// Using range-based for to multiply an array's elements by 2.
#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> items{1, 2, 3, 4, 5};

    // display items before modification
    cout << "items before modification: ";

    for (int item : items) {
        cout << item << " ";
    }

    cout << endl;
}