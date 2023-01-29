// Buchalka C++ Course
// Challenge functions

/*
Given a vector of integers vec that is provided for you, find the sum of the product of
all pairs of vector elements. You should declare an integer variable named result and store
the final product in this variable.

For example, given vector vec to be {1, 2 , 3}, the possible pairs are (1,2), (1,3), and (2,3).
So the result would be (1*2) + (1*3) + (2*3) which is 11.

Another example:
Given vector vec to be {2, 4, 6, 8}, the possible pairs are (2,4), (2,6), (2,8), (4,6), (4,8), and (6,8).
So the result would be (2*4) + (2*6) + (2*8) + (4*6) + (4*8) + (6*8) which is 140.

If the vector is empty or has only 1 element then the result should be 0.
*/

#include <string>
#include <vector>

int calculate_pairs(std::vector<int> vec) {
    std::cout << "\n----\nWelcome to function: int calculate_pairs(vector<int> vec)" << std::endl;
    int result{0};

    for (int i = 0; i < vec.size(); ++i) {
        for (int j = i+1; j < vec.size(); ++j) {
            result = result + vec.at(i) * vec.at(j);
        }
    }
     
    return result;
}