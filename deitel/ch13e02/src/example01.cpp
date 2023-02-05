/*
    cplusplus.com
    Exceptions Example
*/

#include <iostream>

// Function prototypes
void myFunction();

using namespace std;

int main () {
    try
    {
        cout << "Text prior to the throw statement" << endl;
        myFunction();
        cout << "Text following the throw statement" << endl;
    }
    catch (int ex)
    {
        cout << "An exception occurred. Exception Number: " << ex << endl;
    }
    catch (double ex) {
        cout << "An exception occurred. Exception Number: " << ex << endl;
    }

    return 0;
}

void myFunction() {
    cout << "Entering funtion: myFunction()" << endl;
    throw 42;
    // throw 41.01;
    cout << "Exiting function: myFunction()" << endl;
}
