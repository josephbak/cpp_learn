#include <iostream>
#include <string>

int main() {

    for (int i = 1; i <= 100; ++i) {
        std::string tmp = "";

        if (i % 3 == 0) {
            tmp += "Fizz";
        }

        if (i % 5 == 0) {
            tmp += "Buzz";
        }

        if (tmp.empty()){
            std::cout << tmp << '\n';
        } else {
            std::cout << i << '\n';
        }


    }

    return 0;
}