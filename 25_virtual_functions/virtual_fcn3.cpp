#include <iostream>

/*
    Demonstrates why calling virtual functions from constratuctors is a problem.
    Even though foo is overridden in Derived, the call from the Base constructor invokes Base::foo, because the Derived portion of the object hasn't been constructed yet.
*/

class Base {
public:
    Base() {
        std::cout << "Base constructor\n";
        foo(); // virtual call
    }
    virtual void foo() {
        std::cout << "Base::foo\n";
    }
    virtual ~Base() = default;
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor\n";
    }
    void foo() override {
        std::cout << "Derived::foo\n";
    }
};

int main() {
    Derived d;
}