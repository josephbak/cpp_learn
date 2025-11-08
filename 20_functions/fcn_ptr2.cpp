#include <iostream>


int foo(int x)
{
    return x;
}

int main()
{
    int (*fcnPtr)(int){ &foo }; // Initialize fcnPtr with function foo

    std::cout << (*fcnPtr)(5) << std::endl; // call function foo(5) through fcnPtr.
    std::cout << fcnPtr(3) << std::endl; // call function foo(5) through fcnPtr.


    if (fcnPtr)
    { // make sure fcnPtr isn't a null pointer
        std::cout << fcnPtr(1); // otherwise this will lead to undefined behavior
    }
    return 0;
}
