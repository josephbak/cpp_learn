#include <iostream>

int main()
{
    // int a[4] { 1, 2, 3, 4, 5 }; // compile error: too many initializers
    int b[4] { 1, 2 };          // arr[2] and arr[3] are value initialized

    for (auto ele : b){
        std::cout << ele << std::endl;
    }

    return 0;
}