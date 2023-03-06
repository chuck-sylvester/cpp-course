// Deitel C++
// Pass by Refernece
#include <iostream>
using namespace std;

int squareByValue(int);
int squareByReference(int&);

int main() {
    int x{2};
    int z{4};

    // demonstrate squareByValue
    cout << "x = " << x << " before squareByValue\n";
    cout << "Value returned by squareByValue: " << squareByValue(x) << endl;
    cout << "x = " << x << " after squareByValue" << endl;

    // demonstrate squareByReference
    cout << "z = " << z << " before squareByValue\n";
    cout << "Value returned by squareByValue: " << squareByValue(z) << endl;
    cout << "z = " << z << " after squareByValue" << endl;
}

// squareByValue
int squareByValue(int number) {
    return number *= number;
}

// squareByReference
int squareByReference(int& numberRef) {
    return numberRef *= numberRef;
}