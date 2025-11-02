#include <iostream>

int main()
{
    int size;
    std::cout << "Size: ";
    std::cin >> size;
    // int myArray[size];
    int* myArray = new int[size];

    for(int i = 0; i < size; i++) {
        std::cout << "Array[" << i << "]: ";
        std::cin >> myArray[i];
    }


    for(int i = 0; i < size; i++) {
        // std::cout << myArray[i] << " ";
        std::cout << *(myArray + i) << " ";
    }

    delete[] myArray;
    myArray = NULL;

    return 0;
}