#include <iostream>

int main() {

    int *int_ptr = new int[10];
    int_ptr[3] = 241;
    // *int_ptr = 242;

    std::cout << "Value " << int_ptr[3] << '\n';
    std::cout << "Address" << &int_ptr[3] << '\n';

    delete[] int_ptr;

    return 0;
}