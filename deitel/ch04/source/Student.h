// Fig. 4.6: Student.h
// Student class that stores a stuent name and average.
#include <string>

class Student {
public:
    // constructor initializes data members
    Student(std::string studentName, int studentAverage)
        : name(studentName) {
            // sets average data member if studentAverage is valid
            setAverage(studentAverage);
        }
}