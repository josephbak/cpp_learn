#include <iostream>
#include <fstream>

int main() {
    // run for 2^14 iterations
    int iters = 1 << 14;

    // for 2^14 iterations
    for (int i = 0; i < iters; i++) {
        // open the file
        std::ofstream outfile("data.txt");

        // write the output
        outfile << i;

        // close the filw
        outfile.close();
    };
    return 0;
}