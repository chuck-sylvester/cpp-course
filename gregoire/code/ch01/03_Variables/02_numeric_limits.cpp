// import <iostream>;
// import <limits>;
// import <format>;

#include <iostream>
#include <limits>

using namespace std;

int main()
{
	cout << "int:\n";
	cout << "Max int value: " <<  numeric_limits<int>::max() << "\n";
	cout << "Min int value: " << numeric_limits<int>::min() << "\n";
	cout << "Lowest int value: " << numeric_limits<int>::lowest() << "\n";

	// cout << "\ndouble:\n";
	// cout << format("Max double value: {}\n", numeric_limits<double>::max());
	// cout << format("Min double value: {}\n", numeric_limits<double>::min());
	// cout << format("Lowest double value: {}\n", numeric_limits<double>::lowest());
}