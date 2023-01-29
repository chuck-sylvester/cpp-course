// Buchalka C++ Course
// Nested Loops
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        //cout << "Outer Loop: " << i << endl;
        for (int j = 1; j <= 4; j++) {
            //cout << "Inner Loop: " << j << endl;
            cout << i << "*" << j << " = " << i * j << endl;
        }
        cout << "----------" << endl;
    }
}