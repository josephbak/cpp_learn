#include <iostream>

class C {
    public:
    int x = 1;
    int a = 5;
    // void f(int y) { x = y; }
    void f(int y) {
        std::cout << this << std::endl;
        std::cout << &this -> a << std::endl;
    // printf("%p\n", this);           // Prints object's address
    // printf("%p\n", &this->x);       // Prints member's address
}
};



int main() {
    C obj;

    std::cout << &obj << std::endl;

    obj.f(5);


    return 0;
}