#pragma once
#include <memory>
#include <string>
#include <vector>
#include "parser.hpp"
#include "ast.hpp"
#include "token.hpp"

Parser::Parser(const std::vector<Token>& toks) : tokens{toks} {}

Token Parser::peek() {
    if (isAtEnd()) return {TokenType::END, "", 0, 0};
    return tokens[pos];
}
Token Parser::advance() {
    if (isAtEnd()) return {TokenType::END, "", 0, 0};
    return tokens[pos++];
}
bool Parser::isAtEnd()
{
    return pos >= tokens.size() || tokens[pos].type == TokenType::END;
}

bool Parser::match(TokenType type){
    if (isAtEnd()) return false;
    if (peek().type != type) return false;
    advance();
    return true;
}

std::unique_ptr<Expr> Parser::parsePrimary() {
    if (isAtEnd()) {
        throw std::runtime_error("Unexpected end of input");
    }
    Token curr = advance();
    if (curr.type == TokenType::NUMBER) {
        return std::make_unique<NumberExpr>(std::stod(curr.value));
    } else if (curr.type == TokenType::IDENTIFIER) {
        return std::make_unique<VariableExpr>(curr.value);
    }
    throw std::runtime_error("Unexpected token: " + curr.value);
}

std::unique_ptr<Expr> Parser::parse() {
    /*
    std::unique_ptr<Expr> res;
    char op;
    while (!isAtEnd()) {
        if ((peek().type == TokenType::PLUS) || (peek().type == TokenType::MINUS)) {
            op = advance().value[0];
        } else {
            if (!res) {
                // first element
                res = std::move(parsePrimary());
            } else {
                res = std::make_unique<BinaryExpr>(op, std::move(res), parsePrimary());
            }
        }
    }
    return res;
    */
    std::unique_ptr<Expr> left = parsePrimary();
    while ((peek().type == TokenType::PLUS) || (peek().type == TokenType::MINUS)) {
        char op = advance().value[0];
        left = std::make_unique<BinaryExpr>(op, std::move(left), parsePrimary());
    }
    return left;
}