#include <iostream>
#include <memory>

template <typename T>
struct DynamicArray {
    int size;
    std::unique_ptr<T[]> ptr;

    DynamicArray(int new_size) : size(new_size), ptr(new T[new_size]) {}
};

int main() {
    return 0;
}