#include <iostream>
#include <cmath>

class Point{
    float x;
    float y;

    public:

    Point(float x_tmp = 0.0, float y_tmp = 0.0) : x(x_tmp), y(y_tmp) {}
    // ~Point(){}


    float distance(const Point& other) const{
        return std::sqrt(std::pow(x - other.x, 2) + std::pow(y - other.y, 2));
    }

    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }

    friend std::ostream& operator<<(std::ostream& os, const Point& p);

};

// Overload the << operator as a non-member function (must be a friend to access private members)
std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}


int main() {
    Point p1(3.0, 4.0);
    Point p2(0.0, 0.0);
    
    std::cout << p1 << std::endl;           // (3, 4)
    std::cout << p2 << std::endl;           // (0, 0)
    std::cout << p1.distance(p2) << std::endl;  // 5
    
    Point p3 = p1 + p2;
    std::cout << p3 << std::endl;           // (3, 4)
    
    return 0;
}