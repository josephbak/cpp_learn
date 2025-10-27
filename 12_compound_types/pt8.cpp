#include <iostream>


int main(){
    int x = 5;
    int& ref = x;

    std::cout << x << std::endl;
    std::cout << ref << std::endl;


    int* p = &ref;   // address escapes; compiler must materialize
    std::cout << *p << std::endl;

    *p = 20;         // now the compiler can’t safely optimize ref away

    std::cout << ref << std::endl;

    return 0;
}