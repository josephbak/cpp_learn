#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main(int argc, char* argv[]){

    if (argc < 2) {
        std::cerr << "file not provided.\n";
        return 1;
    }

    std::ifstream file(argv[1]);
    if (!file) {
        std::cerr << "file is not opened.\n";
        return 1;
    }

    std::string line;
    std::string word;

    int line_cnt = 0;
    int word_cnt = 0;
    int char_cnt = 0;

    while (std::getline(file, line)) {
        line_cnt++;
        std::stringstream ss(line);
        while (ss >> word) {
            word_cnt++;
        }
        char_cnt += line.length() +1; // +1 for newline 
    }

    std::cout << line_cnt << " " << word_cnt << " " << char_cnt << " " << argv[1] << std::endl;

    return 0;
}