#include <concepts>
#include <iostream>

void print(std::integral auto value) {
    std::cout << "Pringting integral value : " << value << '\n';
}

int main() {
    print(1129u);
    return 0;
}