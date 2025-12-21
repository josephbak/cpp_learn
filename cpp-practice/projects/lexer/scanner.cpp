#include <iostream>
#include <string>

class Scanner {
    std::string source;
    size_t pos = 0;
    
public:
    Scanner(const std::string& src) : source(src) {}
    
    char peek() {
        // return current char without advancing
        if (isAtEnd()) return '\0';
        return source[pos];
    }
    char advance() {
        // return current char AND move forward
        if (isAtEnd()) return '\0';
        return source[pos++];
    }
    bool isAtEnd()
    {
        // true if pos >= source.length()
        return pos >= source.length();
    }
};

int main() {
    Scanner s("hello");
    
    while (!s.isAtEnd()) {
        std::cout << s.peek() << " ";  // h e l l o
        s.advance();
    }

}