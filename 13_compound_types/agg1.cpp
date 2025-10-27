#include <iostream>

struct Employee
{
    int id {};
    int age {100};
    double wage { 76000.0 };
    double whatever;
};

std::ostream& operator<<(std::ostream& out, const Employee& e)
{
    out << e.id << ' ' << e.age << ' ' << e.wage << ' ' << e.whatever;
    return out;
}

int main()
{
    Employee joe { 2, 28, 7 }; // joe.whatever will be value-initialized to 0.0

    std::cout << joe << '\n';

    return 0;
}