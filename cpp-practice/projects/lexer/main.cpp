#include <iostream>
#include <fstream>
#include <sstream>
#include "lexer.hpp"
#include "token.hpp"

int main(int argc, char* argv[]) {
    std::string source;
    
    if (argc >= 2) {
        // Read from file
        std::ifstream file(argv[1]);
        if (!file) {
            std::cerr << "Error: Cannot open file '" << argv[1] << "'\n";
            return 1;
        }
        std::stringstream buffer;
        buffer << file.rdbuf();
        source = buffer.str();
    } else {
        // Read from stdin
        std::stringstream buffer;
        buffer << std::cin.rdbuf();
        source = buffer.str();
    }

    // Lexer lex("x = 10\ny = @\nz = 30");
    Lexer lex(source);
    
    try {
        auto tokens = lex.scanAll();
        for (const auto& t : tokens) {
            std::cout << tokenTypeToString(t.type) 
                      << ": " << t.value 
                      << " [line " << t.line << ", col " << t.column << "]" 
                      << std::endl;
        }
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}