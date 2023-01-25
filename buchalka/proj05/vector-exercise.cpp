/* 
 * Buchalka C++ Course
 * Declaring, initializing, and accessessing vectors
 */

#include <iostream>
#include <vector>
using namespace std;

// Function prototypes
vector<int> use_vector(vector<int> vec1);

int main() {
    vector<int> vec {10, 20, 30, 40, 50};

    for (int i : vec) {
        cout << "vec: " << i << endl;
    }
    cout << endl;

    vec = use_vector(vec);

    for (int i : vec) {
        cout << "vec: " << i << endl;
    }
    cout << endl;
}

vector<int> use_vector(vector<int> vec) {
    int vecSize = vec.size();

    vec[0] = 100;
    vec[vecSize-1] = 1000;
    
    return vec;
}