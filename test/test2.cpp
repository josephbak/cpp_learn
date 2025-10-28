#include <iostream>

struct S {
    int x;

    // S(int new_x) : x(new_x){}
    S(int new_x) {
        std::cout << "before initialization : " << x << std::endl;
        x = new_x;
        std::cout << "after initialization : " << x << std::endl;
    }
};


int main() {
    S s(1);
    return 0;
}