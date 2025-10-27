#include <array>
#include <iostream>

int main() {
    std::array<int, 5> my_array = {1, 2, 3, 4, 5};

    for(auto itr = my_array.rbegin() + 2; itr < my_array.rend(); itr += 1){
        std::cout << *itr << ' ';
    }

    std::cout << '\n';

    return 0;
}