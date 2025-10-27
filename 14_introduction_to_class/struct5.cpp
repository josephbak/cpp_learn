#include <iostream>

struct Date
{
    int year {};
    int month {};
    int day {};

    void print() const // make it const to be used by const object
    {
        std::cout << year << '/' << month << '/' << day;
    }
};

void doSomething(const Date& date)
{
    date.print();
}

int main()
{
    Date today { 2020, 10, 14 }; // non-const
    today.print();

    doSomething(today);

    return 0;
}