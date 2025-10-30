 #include <iostream>

 #include "add.h"
 #include "multiply.h"

int main() {
    // Use my add function
    auto sum = add(10, 20);
    std::cout << "Sum: " << sum << '\n';

    // Use my multiply function
    auto product = multiply(10, 20);
    std::cout << "Product: " << product << '\n';
    return 0;
}