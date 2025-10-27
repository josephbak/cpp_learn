#include <iostream>
#include <string>

int main()
{
    std::string name{ "Alex" };
    std::cout << name << " has " << std::ssize(name) << " characters\n";

    return 0;
}