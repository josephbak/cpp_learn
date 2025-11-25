#include <iostream>


class Base
{
private:
    int m_data;
public:
    Base(){
        std::cout << "Base object created\n";
    };
};

class Derived : public Base
{
private:
    int dm_data;
public:
    Derived(){
        std::cout << "Derieved object created\n";
    };
};


int main() {
    Base b{};
    Derived d{};


    std::cout << sizeof(b) << std::endl;
    std::cout << sizeof(d) << std::endl;



    return 0;
}