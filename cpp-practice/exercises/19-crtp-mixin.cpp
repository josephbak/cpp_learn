#include <iostream>

template<typename Derived>
struct Comparable {
    // implement >, <=, >= using < and ==
    // bool operator>(const Derived& other) const {
    //     return !(*static_cast<const Derived*>(this) == other) && !(*static_cast<const Derived*>(this) < other);
    // }
    // bool operator<=(const Derived& other) const {
    //     return (*static_cast<const Derived*>(this) < other) || (*static_cast<const Derived*>(this) == other);

    // bool operator>=(const Derived& other) const {
    //     return !(*static_cast<const Derived*>(this) < other);
    // }
    private:
        const Derived& self() const { return *static_cast<const Derived*>(this); }
    public:
        bool operator>(const Derived& other) const { return other < self(); }
        bool operator<=(const Derived& other) const { return !(other < self()); }
        bool operator>=(const Derived& other) const { return !(self() < other); }
};

struct Score : Comparable<Score> {
    int value;
    Score(int v) : value(v) {}  // add this
    bool operator<(const Score& other) const { return value < other.value; }
    bool operator==(const Score& other) const { return value == other.value; }
    // >, <=, >= come for free
};



int main() {

    Score a{10}, b{20};
    std::cout << (a < b) << "\n";   // 1
    std::cout << (a > b) << "\n";   // 0
    std::cout << (a <= b) << "\n";  // 1
    std::cout << (a >= b) << "\n";  // 0

    return 0;
}