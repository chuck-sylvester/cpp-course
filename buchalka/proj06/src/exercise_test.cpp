/*
    Driver program to test a few functions
    Print a guest list and clear the guest list
*/

#include <iostream>
#include <string>
#include <typeinfo>
#include "exercise_functions.h"

// Function prototypes, but don't need them since we have a header file
// void event_guest_list(...);                               
// string print_guest_list(...);
// void clear_guest_list(...);

int main() {
    std::cout << "\n[main]" << std::endl;

    std::string guest_list[] {"Larry", "Curly", "Mo"};
    size_t guest_list_size {3};

    print_guest_list(guest_list, guest_list_size);
    std::cout << "\n[main]" << std::endl;

    clear_guest_list(guest_list, guest_list_size);
    std::cout << "\n[main]" << std::endl;

    print_guest_list(guest_list, guest_list_size);
    std::cout << "\n[main]" << std::endl;

    set_guest_list(guest_list, guest_list_size, "Michael", "Scottie", "Dennis");
    std::cout << "\n[main]" << std::endl;

    print_guest_list(guest_list, guest_list_size);
    std::cout << "\n[main]" << std::endl;

    return 0;
}