#include <iostream>
#include <memory>

int main() {

    auto ptr1 = std::make_shared<int[]>(10);

    // auto ptr2 = ptr1;
    std::cout << "Reference cout: " << ptr1.use_count(); // how many shaed pointers managing the resource

    return 0;
}