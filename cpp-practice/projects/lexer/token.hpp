#pragma once
#include <string>

enum class TokenType {
    // Literals
    NUMBER,
    IDENTIFIER,
    
    // Single-char tokens
    PLUS, MINUS, STAR, SLASH,
    LPAREN, RPAREN,
    LBRACE, RBRACE,
    SEMICOLON, EQUALS,
    
    // Keywords
    IF, ELSE, WHILE, FOR, RETURN,
    
    // Special
    END,
    UNKNOWN
};

struct Token {
    TokenType type;
    std::string value;
    int line;
    int column;
};

inline std::string tokenTypeToString(TokenType t) {
    switch (t) {
        case TokenType::NUMBER:     return "NUMBER";
        case TokenType::IDENTIFIER: return "IDENTIFIER";
        case TokenType::PLUS:       return "PLUS";
        case TokenType::MINUS:      return "MINUS";
        case TokenType::STAR:       return "STAR";
        case TokenType::SLASH:      return "SLASH";
        case TokenType::LPAREN:     return "LPAREN";
        case TokenType::RPAREN:     return "RPAREN";
        case TokenType::LBRACE:     return "LBRACE";
        case TokenType::RBRACE:     return "RBRACE";
        case TokenType::SEMICOLON:  return "SEMICOLON";
        case TokenType::EQUALS:     return "EQUALS";
        case TokenType::IF:         return "IF";
        case TokenType::ELSE:       return "ELSE";
        case TokenType::WHILE:      return "WHILE";
        case TokenType::FOR:        return "FOR";
        case TokenType::RETURN:     return "RETURN";
        case TokenType::END:        return "END";
        case TokenType::UNKNOWN:    return "UNKNOWN";
    }
    return "UNKNOWN";
}