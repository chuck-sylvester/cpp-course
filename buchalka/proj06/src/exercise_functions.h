/*
    Exercise functions called by exercise test program
*/

#include <iostream>
#include <string>
#include <typeinfo>

const void print_guest_list(std::string guest_array[], size_t array_size) {
    std::cout << "\n[][print_guest_list]" << std::endl;

    for (int i = 0; i < array_size - 1; i++) {
        std::cout << guest_array[i] << ", ";
    }
    
    std::cout << guest_array[array_size - 1] << std::endl; 
    std::cout << array_size << std::endl;
}


void clear_guest_list(std::string guest_array[], size_t array_size) {
    std::cout << "\n[][clear_guest_list]" << std::endl;

    for (int i = 0; i < array_size; i++) {
        guest_array[i] = "";
    }
}

void set_guest_list(std::string guest_array[], size_t array_size, std::string n1, std::string n2, std::string n3) {

    std::cout << "\n[][set_guest_list]" << std::endl;

    guest_array[0] = n1;
    guest_array[1] = n2;
    guest_array[2] = n3;
}
