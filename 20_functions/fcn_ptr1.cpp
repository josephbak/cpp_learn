#include <iostream>

int foo()
{
    return 5;
}

int goo()
{
    return 6;
}

int main()
{
    int (*fcnPtr)(){ &foo }; // fcnPtr points to function foo
    std::cout << *fcnPtr << std::endl;

    fcnPtr = &goo; // fcnPtr now points to function goo
    std::cout << &fcnPtr << std::endl;

    return 0;
}