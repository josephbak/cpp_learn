#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& s, char delimiter) {
    std::vector<std::string> res;
    size_t i = 0;
    while (i < s.length()) {
        std::string tmp = "";
        while (i < s.length() && s[i] != delimiter) {
            tmp += s[i];
            i++;
        }
        res.push_back(tmp);
        i++;
    }
    // std::cout << res.size();
    return res;
}

int main() {
    std::string s = "apple,banana,cherry";
    std::vector<std::string> parts = split(s, ',');
    
    for (const auto& p : parts) {
        std::cout << "[" << p << "]" << std::endl;
    }
    // [apple]
    // [banana]
    // [cherry]
    
    // Edge cases:
    std::string s2 = "one,,three";  // empty middle
    // Should produce: ["one", "", "three"]

    std::string s3 = "no delimiter here";
    // Should produce: ["no delimiter here"]

    std::vector<std::string> parts2 = split(s2, ',');
    for (const auto& p : parts2) {
        std::cout << "[" << p << "]" << std::endl;
    }

    std::vector<std::string> parts3 = split(s3, ',');
    for (const auto& p : parts3) {
        std::cout << "[" << p << "]" << std::endl;
    }
    
    return 0;
}