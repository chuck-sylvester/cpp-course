// NOTE: Most compilers will issue a warning or an error
// when code is using uninitialized variables. Some compilers
// will generate code that will report an error at run time.

// import <iostream>;
// import <format>;

#include <iostream>

using namespace std;

int main()
{
	int uninitializedInt;
	int initializedInt {7};

	// cout << format("{} is a random value", uninitializedInt) << endl;
	// cout << format("{} was assigned an initial value", initializedInt) << endl;

    cout << uninitializedInt << " is a random value" << endl;
    cout << initializedInt << " was assigned an initial value" << endl;
}
