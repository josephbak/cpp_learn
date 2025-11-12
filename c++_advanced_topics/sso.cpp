#include <cstdlib>
#include <iostream>
#include <string>

// overload new operator to track heap allocations
void* operator new(size_t n) {
    std::cout << "Allocating" << n << " bytes\n";
    return malloc(n);
}

int main() {
    // first, see how big a string is
    size_t string_size = sizeof(std::string);
    std::cout << "Size of string = " << string_size << '\n';

    // gradually increase the size of the string in the loop
    for (size_t i = 0; i < 32; i++) {
        std::string s(i, 'X');
        std::cout << "Characters: " << i
                  << " Address: " << static_cast<const void*>(s.data()) << '\n';
    }


    return 0;
}