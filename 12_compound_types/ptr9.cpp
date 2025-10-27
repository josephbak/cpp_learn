#include <iostream>
int main()
{
    int x{ 5 }; // non-const
    const int* ptr { &x }; // ptr points to a "const int"

    std::cout << *ptr << std::endl;

    // *ptr = 6;  // not allowed: ptr points to a "const int" so we can't change the value through ptr

    x = 6; // allowed: the value is still non-const when accessed through non-const identifier x
    std::cout << *ptr << std::endl;

    return 0;
}