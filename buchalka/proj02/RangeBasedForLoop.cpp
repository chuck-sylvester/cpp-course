// Buchalka C++ course
// Learning abou the range-based for loop
#include <iostream>
using namespace std;

int main() {
    for (char c: "Charles P. Sylvester") {
       cout << c << endl;
    }

    for (char c: {'1', '2', '3', '4', '5'}) {
        cout << c << endl;
    }

    int number[] {5, 10, 15, 20};
    for (int i: number) {
       cout << i << " | ";
    }
    cout << endl;


}

