#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char* argv[]){
    if (argc < 2) {
        std::cerr << "file was not provided.\n";
        return 1;
    }
    
    std::ifstream file(argv[1]);
    if (!file) {
        std::cerr << "file is not opened.\n";
        return 1;
    }

    int count = 1;
    std::string line;

    while (std::getline(file, line)) {
        std::cout << count << ": " << line << std::endl;
        count++;
    }

    return 0;
}