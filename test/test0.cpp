#include <iostream>
#include <cstddef>

struct Point {
    int x;      // offset 0
    int y;      // offset 4
};


int main() {
    
    std::cout << offsetof(Point, x) << std::endl;
    std::cout << offsetof(Point, y) << std::endl;
    return 0;
}