#include <iostream>

int main()
{
    int arr1[5];    // Members default initialized int elements are left uninitialized)
    int arr2[5] {}; // Members value initialized (int elements are zero uninitialized) (preferred)

    for (auto ele : arr1){
        std::cout << ele << std::endl;
    }

    std::cout << '\n';

    for (auto ele : arr2){
        std::cout << ele << std::endl;
    }

    return 0;
}