#include <iostream>

void printElementZero(int arr[1000]) // doesn't make a copy
{
    std::cout << arr[0] << '\n'; // print the value of the first element
    std::cout << arr[1] << '\n';
    std::cout << arr[2];
}

int main()
{
    int x[7] { 5 };      // define an array with 7 elements
    printElementZero(x); // somehow works!

    return 0;
}