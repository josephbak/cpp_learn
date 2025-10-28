#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

int main() {
    std::mutex m;
    auto print_thread_id = [&m](int id) {
        std::lock_guard<std::mutex> lg(m); // automatic unlock. RAII
        // m.lock();
        std::cout << "Printign from thread: " << id << '\n';
        // m.unlock();
    };
    
    std::vector<std::jthread> my_threads;
    for(int i = 0; i < 3; i+=1) {
        my_threads.emplace_back(print_thread_id, i);
    }
    return 0;
}