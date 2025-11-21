#include <iostream>

void printArraySize(int arr[])
{
    std::cout << sizeof(arr) << '\n'; // prints 4 (assuming 32-bit addresses)
    // std::cout << std::size(arr) << '\n'; // compile error: std::size() won't work on a pointer

}

int main()
{
    int arr[]{ 3, 2, 1 };

    std::cout << std::size(arr) << '\n'; // prints 3
    std::cout << sizeof(arr) << '\n'; // prints 12 (assuming 4 byte ints)

    printArraySize(arr);

    return 0;
}