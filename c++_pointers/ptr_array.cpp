#include <iostream>

int main() {
    int luckyNumbers[5]; // = {2, 3, 5, 7, 9};

    // std::cout << luckyNumbers << std::endl;
    // std::cout << luckyNumbers[0] << std::endl;

    // std::cout << luckyNumbers[2] << std::endl;
    // std::cout << *(luckyNumbers + 2) << std::endl;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Number: ";
        std::cin >> luckyNumbers[i];
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << *(luckyNumbers + i) << " ";
    }

    return 0;
}