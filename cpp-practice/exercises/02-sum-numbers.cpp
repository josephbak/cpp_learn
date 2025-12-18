#include <iostream>
#include <string>
#include <stdexcept>

int main() {

    int total = 0;

    while (true) {

        std::cout << "Give me a number to be added: ";

        std::string tmp;
        std::cin >> tmp;
        if (tmp == "done") {
            // breaking the loop
            break;
        }
        try{
            size_t pos;
            int num = std::stoi(tmp, &pos);

            if (pos != tmp.length()) {throw std::invalid_argument("not fully numeric");}
            total += num;
        } catch (...) {
            std::cout << "Invalid number! Try again." << std::endl;
        }
    }

    std::cout << "The total sum is " << total << std::endl;

    return 0;
}