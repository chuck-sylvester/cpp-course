/*
    Working with two-dimensional vectors
*/

#include <iostream>
#include <iomanip>
#include <vector>

int main() {
    std::vector<std::vector<int>> movie_ratings
    {
        {1, 2, 3, 4},       // movie reviewer #1
        {1, 2, 4, 4},       // movie reviewer #2
        {1, 3, 4, 5}        // movie reviewer #3
    };

    std::cout << "Here are the movie ratings for reviewer #1:" << std::endl;
    std::cout << movie_ratings.at(0).at(0) << std::endl;
    std::cout << movie_ratings.at(0).at(1) << std::endl;
    std::cout << movie_ratings.at(0).at(2) << std::endl;
    std::cout << movie_ratings.at(0).at(3) << std::endl;
}