// Fig. 3.2: Account.h
// Account class that contains a name data member
// and member functions to set and get its value.
#include <string>

class Account {
    public:
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