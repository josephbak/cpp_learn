#include <iostream>

// a declaration for our function template (we don't need the definition any more)
template <typename T>
T max(T x, T y);

// template<>
// int max<int>(int x, int y) // the generated function max<int>(int, int)
// {
//     return (x < y) ? y : x;
// }

int main()
{
    std::cout << max<int>(1, 2) << '\n'; // instantiates and calls function max<int>(int, int)
    std::cout << max<>(1, 5) << '\n'; // instantiates and calls function max<int>(int, int)
    std::cout << max(1, 5) << '\n'; // instantiates and calls function max<int>(int, int)

    return 0;
}