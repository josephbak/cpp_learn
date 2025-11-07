#include <iostream>

class Something
{
public:
    static inline int s_value; // declare s_value as static
};

// int Something::s_value{ 1 }; // define and initialize s_value to 1 (we'll discuss this section below)

int main()
{
    // note: we're not instantiating any objects of type Something

    std::cout << Something::s_value << '\n';
    Something::s_value = 2;
    std::cout << Something::s_value << '\n';
    return 0;
}