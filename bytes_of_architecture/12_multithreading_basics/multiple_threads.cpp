#include <thread>

void infinite_loop() {
    // run forever
    while (true) {
        // keep incrementing some value over and over
        int value = 0;
        for (int i = 0; i < 100000; i ++) value += 1;
    }
}

int main() {
    //create some threads
    std::thread t1(infinite_loop);
    std::thread t2(infinite_loop);

    // put a joint here, but these loops should never end...
    t1.join();
    t2.join();

    return 0;
}