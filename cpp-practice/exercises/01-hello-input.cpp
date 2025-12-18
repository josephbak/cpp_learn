#include <iostream>
#include <string>


int main() {

    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);
    // std::cin >> name;

    std::cout << "Hello, " << name << "\n";

    return 0;
}