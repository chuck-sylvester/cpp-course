/*
    Fig. 3.4: Account.h
    Account class that contains a name data member and member functions to set and get its value.
    Update to class includes a constructor that initializes the account name.
*/
#include <string>

class Account {
public:
    // constructor initializes data member name with parameter accountName
    explicit Account(std::string accountName) : name {accountName} {
        // empty body
    }

    // member function that sets the account name in the object
    void setName(std::string accountName) {
        name = accountName;
    }

    // member function that retrieves the account name from the object
    std::string getName() const {
        return name;
    }
 private:
    std::string name;
};