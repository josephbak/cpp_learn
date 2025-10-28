#include <execution>
#include <numeric>
#include <vector>


int main() {
    std::vector<int> my_vector(1 << 30);
    auto r = std::reduce(std::execution::par_unseq, my_vector.begin(), my_vector.end(), 0);
    return r;
}