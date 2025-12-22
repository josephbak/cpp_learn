#include <string>
#include <vector>
#include <cctype>
#include <stdexcept>
#include "lexer.hpp"
#include "token.hpp"

Lexer::Lexer(const std::string& src) : source(src) {}
    
// Scanner methods (private)
char Lexer::peek() {
    if (isAtEnd()) return '\0';
    return source[pos];
}
char Lexer::advance() {
    if (isAtEnd()) return '\0';
    column++;
    return source[pos++];
}
bool Lexer::isAtEnd()
{
    return pos >= source.length();
}

void Lexer::skipWhitespace() {
    while (!isAtEnd() && std::isspace(peek())){
        if (peek() == '\n') {
            line++;
            column = 0;  // will become 1 after advance()
        }
        advance();  // always advance
    }
}

// Token scanning
Token Lexer::scanNumber() {
    int startColumn = column;  // save start position
    std::string tmp;
    while (!isAtEnd() && std::isdigit(peek())) {
        tmp += advance();
    }

    return {TokenType::NUMBER, tmp, line, startColumn};
}

Token Lexer::scanIdentifier() {
    /* 
    static const std::unordered_map<std::string, TokenType> keywords = {
        {"if", TokenType::IF},
        {"else", TokenType::ELSE},
        {"while", TokenType::WHILE},
        {"for", TokenType::FOR},
        {"return", TokenType::RETURN}
    };
    
    std::string tmp;
    while (!isAtEnd() && std::isalnum(peek())) {
        tmp += advance();
    }
    
    auto it = keywords.find(tmp);
    if (it != keywords.end()) {
        return {it->second, tmp};
    }
    return {TokenType::IDENTIFIER, tmp};
    */

    int startColumn = column;
    std::string tmp;
    while (!isAtEnd() && (std::isdigit(peek()) || std::isalpha(peek()))) {
        tmp += advance();
    }

    if (tmp == "if") {
        return {TokenType::IF, tmp, line, startColumn};
    }
    if (tmp == "else") {
        return {TokenType::ELSE, tmp, line, startColumn};
    }
    if (tmp == "while") {
        return {TokenType::WHILE, tmp, line, startColumn};
    }
    if (tmp == "for") {
        return {TokenType::FOR, tmp, line, startColumn};
    }
    if (tmp == "return") {
        return {TokenType::RETURN, tmp, line, startColumn};
    }

    return {TokenType::IDENTIFIER, tmp, line, startColumn};
}
    

Token Lexer::scanToken() {
    skipWhitespace();

    if (isAtEnd()) {
        return {TokenType::END, "", line, column};
    }
    
    char c = peek();
    
    // Numbers
    if (std::isdigit(c)) {
        return scanNumber();
    }
    
    // Identifiers and keywords
    if (std::isalpha(c)) {
        return scanIdentifier();
    }
    
    // Single-char tokens
    int startColumn = column;
    advance();  // consume the char
    switch (c) {
        case '+': return {TokenType::PLUS, "+", line, startColumn};
        case '-': return {TokenType::MINUS, "-", line, startColumn};
        case '*': return {TokenType::STAR, "*", line, startColumn};
        case '/': return {TokenType::SLASH, "/", line, startColumn};
        case '(': return {TokenType::LPAREN, "(", line, startColumn};
        case ')': return {TokenType::RPAREN, ")", line, startColumn};
        case '{': return {TokenType::LBRACE, "{", line, startColumn};
        case '}': return {TokenType::RBRACE, "}", line, startColumn};
        case ';': return {TokenType::SEMICOLON, ";", line, startColumn};
        case '=': return {TokenType::EQUALS, "=", line, startColumn};
    }

    throw std::runtime_error("Error at line " + std::to_string(line) + 
                             ", column " + std::to_string(column) + 
                             ": Unexpected character '" + c + "'");

    // return {TokenType::UNKNOWN, std::string(1, c)};

}

std::vector<Token> Lexer::scanAll() {
    std::vector<Token> tokens;
    while (true) {
        Token t = scanToken();
        tokens.push_back(t);
        if (t.type == TokenType::END) {
            break;
        }
    }
    return tokens;
}