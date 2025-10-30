#include <chrono>
#include <thread>

int main() {
    // sleep for 500ms
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    return 0;
}