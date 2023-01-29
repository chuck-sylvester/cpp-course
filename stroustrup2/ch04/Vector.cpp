// Stroustrup2 C++ Book
// Vector.cpp
// Learning about vectors
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> vec;

    vec.push_back("Hello, ");  
    vec.push_back("World!");  

    for (vector<string>::iterator i=vec.begin(); i!=vec.end(); ++i) {
        cout << *i;  
    }

    return 0;   
}