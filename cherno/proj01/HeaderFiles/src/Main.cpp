#include <iostream>
#include "Log.h"

int main() {
    Log("Hello World!");
}

void Log(const char* message) {
    std::cout << message << std::endl;
}