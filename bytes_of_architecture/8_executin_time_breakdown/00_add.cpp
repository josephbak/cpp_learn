int main() {
    // run for 2^30 iterations
    int num_values = 1 << 30;

    // create a colatile int to keep it from being optimized away
    volatile int result = 0;

    // add 1 from 2^30 times
    for (int i = 0; i < num_values; i ++) result += 1;

    return result;
}