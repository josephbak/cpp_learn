#include <iostream>

template<typename Derived>
class Counter {
    static int count;
public:
    Counter() { count++; }
    ~Counter() { count--; }
    static int alive() { return count; }
};

template<typename Derived>
int Counter<Derived>::count = 0;

class Dog : public Counter<Dog> {};
class Cat : public Counter<Cat> {};


int main() {
    Dog d1, d2, d3;
    Cat c1, c2;
    
    std::cout << Dog::alive() << std::endl;  // 3
    std::cout << Cat::alive() << std::endl;  // 2
}