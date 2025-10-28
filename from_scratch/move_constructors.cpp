#include <iostream>
#include <vector>
#include <utility>

struct S {
    S() {
        std::cout << "Constructor!\n";
    }
    S(const S &s){
        std::cout << "Copy Constructor!\n";
    }
    S(S &&s) {
        std::cout << "Move Constructor!\n";
    }
};


int main() {
    std::vector<S> my_vector;
    // S s;
    my_vector.push_back(S());
    return 0;
}