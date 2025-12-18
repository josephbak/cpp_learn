#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <unordered_map>
#include <cctype>
#include <algorithm>
#include <vector>

std::string lower_string_copy(const std::string& text) {
    std::string result = text;
    std::transform(result.begin(), result.end(), result.begin(), 
                   [](unsigned char c) { return std::tolower(c); });
    return result;
}

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

    std::unordered_map<std::string, int> map;
    std::string line;
    std::string word;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        while (ss >> word) {
            map[lower_string_copy(word)]++;
        }
    }

    // for (const auto& pair : map) {
    //     std::cout << pair.first << ": " << pair.second << "\n";
    // }

    // 1. Copy pairs to a vector
    std::vector<std::pair<std::string, int>> sortedVec(map.begin(), map.end());

    // 2. Sort vector by the second element (int value)
    std::sort(sortedVec.begin(), sortedVec.end(), [](const auto& a, const auto& b) {
        return a.second > b.second; // Use > for descending order
    });

    // 3. Print the sorted results
    // for (const auto& [name, score] : sortedVec) {
        // std::cout << name << ": " << score << "\n";
    // }
    for (const auto& pair : sortedVec) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}