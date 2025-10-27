#include <iostream>
#include <string>

template <typename T>
T addOne(T x)
{
    return x + 1;
}

int main()
{
    // std::string hello{ "Hello, world!" };
    std::cout << addOne("Hello, world!") << '\n';

    return 0;
}