#include <iostream>


struct Bloated {
    bool flag1;      // 1 byte
    double value;    // 8 bytes
    bool flag2;      // 1 byte
    int count;       // 4 bytes
};


// Layout:
// [f1][7 pad][value...][f2][3 pad][count][4 pad]


struct Compact {
    double value;    // 8 bytes (largest first)
    int count;       // 4 bytes
    bool flag1;      // 1 byte
    bool flag2;      // 1 byte
    // 2 bytes pad at end
};

// Layout:
// [value...][count][f1][f2][2 pad]

int main() {
    std::cout << sizeof(Bloated) << std::endl;     // = 24 bytes!
    std::cout << sizeof(Compact) << std::endl;     // = 16 bytes (33% smaller!)


}