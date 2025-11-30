#include <iostream>

namespace V1 // declare a normal namespace named V1
{
    void doSomething()
    {
        std::cout << "V1\n";
    }
}

inline namespace // declare an inline unnamed namespace
{
    void doSomething() // has internal linkage
    {
        std::cout << "V2\n";
    }
}

int main()
{
    V1::doSomething(); // calls the V1 version of doSomething()
    // there is no V2 in this example, so we can't use V2:: as a namespace prefix

    doSomething(); // calls the inline version of doSomething() (which is the anonymous one)

    return 0;
}