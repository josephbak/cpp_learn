#include <iostream>
// const pointers

int main()
{
    int x{ 5 };
    int* const ptr { &x }; // ptr will always point to x

    std::cout << x << std::endl;

    *ptr = 6; // okay: the value being pointed to is non-const

    std::cout << x << std::endl;
    return 0;
}