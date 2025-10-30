#include <iostream>

int main(){

    int n = 5;
    std::cout << &n << std::endl;
    
    int* ptr = &n;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;

    *ptr = 10;
    std::cout << *ptr << std::endl;
    std::cout << n << std::endl;

    int* ptr2;
    // *ptr2 = 7;
    std::cout << ptr2 << std::endl;
    std::cout << *ptr2 << std::endl;

    return 0;
}