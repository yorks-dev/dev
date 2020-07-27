#include <iostream>

extern int x;

int main() {

    std::cout << "Printing the Linker Error Message" << std::endl;
    std::cout << x << std::endl;

    return 0;
}
