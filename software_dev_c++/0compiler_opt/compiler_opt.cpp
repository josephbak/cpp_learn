#include <vector>

int main() {
    auto num_elements = 1 << 28;
    std::vector<int> vector(num_elements);

    // Modulo each value by 20
    for (auto &value : vector) {
        value %= 20;
    }
}