#pragma once
#include <string>
#include <vector>
#include "token.hpp"
#include "ast.hpp"

class Parser {
    std::vector<Token> tokens;
    size_t pos = 0;
    
    Token peek();
    Token advance();
    bool isAtEnd();
    // void skipWhitespace();
    bool match(TokenType type);
    
public:
    Parser(const std::vector<Token>& toks);
    std::unique_ptr<Expr> parse();
    std::unique_ptr<Expr> parsePrimary();  // number OR variable
};