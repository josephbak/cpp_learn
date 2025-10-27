#include "add.h"
#include <iostream>


// int add(int x, int y); // forward declaration of add() (using a function declaration)

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above

    int y = 5;
    std::cout << y << std::endl;
    y = 7;
    std::cout << y << std::endl;

    return 0;
}

// int add(int x, int y) // even though the body of add() isn't defined until here
// {
//     return x + y;
// }