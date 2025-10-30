#include <iostream>

// int addInt(int a, int b) {
//     return a + b;
// }

// int addFloat(float a, float b) {
//     return a + b;
// }

template<typename T>
T add(T a, T b) {
    return a + b;
}

template<typename T>
T subtract(T a, T b) {
    return a - b;
}


template <typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }

    T subtract(T a, T b) {
        return a - b;
    }

    T multiply(T a, T b) {
        return a * b;
    }

    T divide(T a, T b) {
        if(b == 0) {
            std::cout << "Error: Division by zero!" << std::endl;
            return 0;
        }
        return a / b;
}

};

int main()
{
    // std::cout << addInt(5, 7) << std::endl;
    // std::cout << addFloat(5.3, 7.7) << std::endl;

    // std::cout << add(5, 7) << std::endl;
    // std::cout << add(5.3, 7.7) << std::endl;

    // std::cout << subtract(5, 7) << std::endl;
    // std::cout << subtract(5.3, 7.7) << std::endl;

    Calculator<int> intCalculator;
    std::cout << intCalculator.add(5, 8) << std::endl;
    std::cout << intCalculator.subtract(5, 8) << std::endl;

    Calculator<float> floatCalculator;
    std::cout << floatCalculator.add(5.2, 7.84) << std::endl;
    std::cout << floatCalculator.subtract(5.2, 7.84) << std::endl;
    std::cout << floatCalculator.multiply(5.2, 7.84) << std::endl;
    std::cout << floatCalculator.divide(5.2, 7.84) << std::endl;


    // std::cin.get();

    return 0;
}