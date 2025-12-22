#include <iostream>
#include <vector>
#include "token.hpp"
#include "ast.hpp"
#include "parser.hpp"

// int main() {
    // Manually build: 1 + 2
    // auto one = std::make_unique<NumberExpr>(1);
    // auto two = std::make_unique<NumberExpr>(2);
    // auto add = std::make_unique<BinaryExpr>('+', std::move(one), std::move(two));
    // add->print();
// }

int main() {
    // Test 1: Parse number
    // std::vector<Token> tokens1 = {
    //     {TokenType::NUMBER, "123", 1, 1},
    //     {TokenType::END, "", 1, 4}
    // };
    // Parser p1(tokens1);
    
    // try {
    //     auto ast1 = p1.parse();
    //     ast1->print();  // NumberExpr(123)
    // } catch (const std::runtime_error& e) {
    //     std::cerr << e.what() << std::endl;
    // }
    
    // // Test 2: Parse variable
    // std::vector<Token> tokens2 = {
    //     {TokenType::IDENTIFIER, "x", 1, 1},
    //     {TokenType::END, "", 1, 2}
    // };
    // Parser p2(tokens2);
    
    // try {
    //     auto ast2 = p2.parse();
    //     ast2->print();  // VariableExpr(x)
    // } catch (const std::runtime_error& e) {
    //     std::cerr << e.what() << std::endl;
    // }

    // std::vector<Token> tokens = {
    // {TokenType::NUMBER, "1", 1, 1},
    // {TokenType::PLUS, "+", 1, 3},
    // {TokenType::NUMBER, "2", 1, 5},
    // {TokenType::PLUS, "+", 1, 7},
    // {TokenType::NUMBER, "3", 1, 9},
    // {TokenType::END, "", 1, 10}
    // };

//     std::vector<Token> tokens = {
//     {TokenType::NUMBER, "1", 1, 1},
//     {TokenType::PLUS, "+", 1, 3},
//     {TokenType::NUMBER, "2", 1, 5},
//     {TokenType::STAR, "*", 1, 7},
//     {TokenType::NUMBER, "3", 1, 9},
//     {TokenType::END, "", 1, 10}
// };

std::vector<Token> tokens = {
    {TokenType::LPAREN, "(", 1, 1},
    {TokenType::NUMBER, "1", 1, 2},
    {TokenType::PLUS, "+", 1, 4},
    {TokenType::NUMBER, "2", 1, 6},
    {TokenType::RPAREN, ")", 1, 7},
    {TokenType::STAR, "*", 1, 9},
    {TokenType::NUMBER, "3", 1, 11},
    {TokenType::END, "", 1, 12}
};

    Parser p(tokens);
    auto ast = p.parse();
    ast->print();
    return 0;
}