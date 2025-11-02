#include <iostream>
#include <type_traits>

// int getNumber() {
//     return 5;
// }

// int add(int a, int b) {
//     return a + b;
// }

bool asceningCompare(int a, int b) {
    return a < b;
}

bool deceningCompare(int a, int b) {
    return a > b;
}



int main()
{

    int(*funcPtr)(int, int)=add;

    std::cout << add(2, 3) << std::endl;
    std::cout << funcPtr(3, 4) << std::endl;


    // int(*funcPtr)()=getNumber;
    // std::cout << funcPtr();

    // std::cout << &getNumber;

    return 0;
}