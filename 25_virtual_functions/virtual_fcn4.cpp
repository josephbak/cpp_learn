#include <iostream>

/*
    Demonstrates why calling virtual functions from destructor is a problem.
    Here, by the time the Base destructor runs and calls foo, the Derived portion of the object is already destroyed, so again Base::foo is called, not Derived::foo.
*/

class Base {
public:
    virtual ~Base() {
        std::cout << "Base destructor\n";
        foo(); // virtual call
    }
    virtual void foo() {
        std::cout << "Base::foo\n";
    }
};

class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived destructor\n";
    }
    void foo() override {
        std::cout << "Derived::foo\n";
    }
};

int main() {
    Derived d;
}
