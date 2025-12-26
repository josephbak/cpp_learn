#include <iostream>

// template<typename Derived>
// struct Shape {
//     double area() {
//         return static_cast<Derived*>(this)->area_impl();
//     }
// };

// struct Circle : Shape<Circle> {
//     double radius;
//     Circle(double r) : radius(r) {}
//     double area_impl() { return 3.14159 * radius * radius; }
// };

// struct Square : Shape<Square> {
//     double side;
//     Square(double s) : side(s) {}
//     double area_impl() { return side * side; }
// };

// template<typename T>
// void process(Shape<T>& shape) {
//     std::cout << shape.area() << "\n";  // no vtable, inlined
// }

// int main() {
//     Circle c(5.0);
//     Square s(4.0);
//     process(c);  // 78.5...
//     process(s);  // 16
// }


// Virtual version
struct VShape {
    virtual double area() = 0;
};
struct VCircle : VShape {
    double radius;
    double area() override { return 3.14 * radius * radius; }
};

// CRTP version
template<typename D>
struct CShape {
    double area() { return static_cast<D*>(this)->area_impl(); }
};
struct CCircle : CShape<CCircle> {
    double radius;
    double area_impl() { return 3.14 * radius * radius; }
};

int main() {
    std::cout << sizeof(VCircle) << "\n";  // 16 (8 vtable ptr + 8 double)
    std::cout << sizeof(CCircle) << "\n";  // 8  (just the double, no vtable)
}