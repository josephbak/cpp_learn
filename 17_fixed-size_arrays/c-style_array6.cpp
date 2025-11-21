#include <iostream>
#include <iterator> // for std::size and std::ssize

int main()
{
    const int prime[] { 2, 3, 5, 7, 11 }; // the compiler will deduce prime to have length 5

    std::cout << sizeof(prime) << '\n'; // prints 20 (assuming 4 byte ints)
    std::cout << sizeof(prime)/sizeof(prime[0]) << '\n'; // prints 20 (assuming 4 byte ints)

    std::cout << std::size(prime) << '\n';  // C++17, returns unsigned integral value 5
    std::cout << std::ssize(prime) << '\n'; // C++20, returns signed integral value 5
    return 0;
}