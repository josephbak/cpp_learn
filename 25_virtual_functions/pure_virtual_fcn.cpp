#include <string_view>

class Base
{
public:
    std::string_view sayHi() const { return "Hi"; } // a normal non-virtual function

    virtual std::string_view getName() const { return "Base"; } // a normal virtual function

    virtual int getValue() const = 0; // a pure virtual function

    // int doSomething() = 0; // Compile error: can not set non-virtual functions to 0
};

int main()
{
    Base base {};
    
    base.getValue();

    return 0;
}