#pragma once
#include <string>
#include <vector>
#include "token.hpp"

class Lexer {
    std::string source;
    size_t pos = 0;
    int line = 1; // Lexer tracks position
    int column = 1;
    
    // Scanner methods (private)
    char peek();
    char advance();
    bool isAtEnd();
    void skipWhitespace();
    
    // Token scanning
    Token scanNumber();
    Token scanIdentifier();
    
public:
    Lexer(const std::string& src);
    Token scanToken();
    std::vector<Token> scanAll();
};