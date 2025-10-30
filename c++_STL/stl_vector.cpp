#include <iostream>
#include <vector>

int main() {

    std::vector<int> numbers;
    // numbers.push_back(0);

    for(int i = 1; i <= 10; i++) {
        numbers.push_back(i);
    }

    numbers.insert(numbers.begin() + 5, 88);
    numbers.pop_back();
    for (auto n: numbers) {
        std::cout << n << std::endl;
    }
    // numbers.erase(numbers.begin() + 5);
    // for (auto n: numbers) {
    //     std::cout << n << std::endl;
    // }


    /***
    // vector functionality
    std::cout << "Size: " << numbers.size() << std::endl;
    std::cout << "Max size: " << numbers.max_size() << std::endl;
    std::cout << "Capacity " << numbers.capacity() << std::endl;
    numbers.resize(5);
    std::cout << "Size: " << numbers.size() << std::endl;
    if (numbers.empty()){
        std::cout << "Vector is empty\n";
    }else {
        std::cout << "Vector is not empty\n";
    }
    std::cout << "Element [0] is: " << numbers[0] << std::endl;
    std::cout << "Element at(0) is: " << numbers.at(0) << std::endl;
    std::cout << "Front: " << numbers.front() << std::endl;
    std::cout << "Back: " << numbers.back() << std::endl;
    numbers.clear();
    std::cout << "Size: " << numbers.size() << std::endl;
    ***/


    // auto it = numbers.begin();
    // std::cout << *(it + 5);

    // for(int number: numbers) {
    //     std::cout << number << std::endl;
    // }

    // for(auto it=numbers.cbegin(); it != numbers.cend(); it++) {
        // *it = 20;
        // std::cout << *it << std::endl;

        // std::cout << it << std::endl;
        // std::cout << *it << std::endl;
        // std::cout << &it << std::endl;
        // std::cout << &(*it) << std::endl;
        // std::cout << "================" << std::endl;
    // }

    return 0;
}