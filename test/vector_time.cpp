#include <iostream>
#include <vector>
#include <chrono>

int main() {
    std::vector<int> v(1000000000, 1);

    // Accumulators to prevent optimization
    long long sum1 = 0;
    long long sum2 = 0;

    auto start1 = std::chrono::steady_clock::now();
    for (int n : v) {
        sum1 += n;
    }
    auto end1 = std::chrono::steady_clock::now();

    auto start2 = std::chrono::steady_clock::now();
    for (const int& n : v) {
        sum2 += n;
    }
    auto end2 = std::chrono::steady_clock::now();

    std::chrono::duration<double> elapsed_seconds1 = end1 - start1;
    std::chrono::duration<double> elapsed_seconds2 = end2 - start2;

    std::cout << "Elapsed time using copy iteration: " << elapsed_seconds1.count() << " s\n";
    std::cout << "Elapsed time using const reference iteration: " << elapsed_seconds2.count() << " s\n";

    // Print sums so compiler doesn't optimize away loops
    std::cout << "Sum1: " << sum1 << ", Sum2: " << sum2 << '\n';

    return 0;
}
