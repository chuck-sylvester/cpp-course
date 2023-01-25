/*
   Buchalka C++ course
   Given a number of cents, convert this into bills and coins, with the fewest
   number of bills and coins. This solution accounts for dollars, quarters, dimes,
   nickles, and pennies.
   
   Prompt the user for the number of cents.
   Validate proper handling of edge cases, e.g. 0 and negative values.
   Print the results like below.
   
   For example, $.092 results in the following:
    Dollars:  0
    Quarters: 3
    Dimes:    1
    Nickles:  1
    Pennies:  2
*/

#include <iostream>
using namespace std;

// Function prototypes
// (start out only using main)

int main() {
    int original_value_in_cents {};
    int running_balance {};
    int dollars {};
    int quarters {};
    int dimes {};
    int nickles {};
    int pennies {};

    cout << "Please enter the number of cents to convert into bills and coins: ";
    cin >> original_value_in_cents;

    if (original_value_in_cents >= 0) {
        cout << "\nYou entered " << original_value_in_cents << " cents\n" << endl;
    }
    else {
        cout << "\nInvalid entry, value must be zero or greater\n" << endl;
        return 0;
    }
    
    // Get Dollars
    dollars = original_value_in_cents / 100;
    running_balance = original_value_in_cents % 100;
    cout << dollars << " | " << running_balance << endl;

    // Get Quarters
    quarters = running_balance / 25;
    running_balance = running_balance % 25;
    cout << quarters << " | " << running_balance << endl;

    // Get Dimes
    dimes = running_balance / 10;
    running_balance = running_balance % 10;
    cout << dimes << " | " << running_balance << endl;

    // Get Nickles
    nickles = running_balance / 5;
    running_balance = running_balance % 5;
    cout << nickles << " | " << running_balance << endl;

    // Get Pennies
    pennies = running_balance / 1;
    running_balance = running_balance % 1;
    cout << pennies << " | " << running_balance << endl;

    // Print formatted results
    cout << "\n--------------------" << endl;
    cout << "Dollars:   " << dollars << endl;
    cout << "Quarters:  " << quarters << endl;
    cout << "Dimes:     " << dimes << endl;
    cout << "Nickles:   " << nickles << endl;
    cout << "Pennies:   " << pennies << endl;
    cout << "--------------------\n" << endl;
    return 0;
}