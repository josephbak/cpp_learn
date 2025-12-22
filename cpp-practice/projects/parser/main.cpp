#include <iostream>
#include <vector>
#include <map>
#include "ast.hpp"
#include "lexer.hpp"
#include "parser.hpp"
#include "token.hpp"

double evaluate(Expr* expr, std::map<std::string, double>& vars) {
    // implementation
    if (NumberExpr* n = dynamic_cast<NumberExpr*>(expr)) {
        return n->value;
    } else if (VariableExpr* v = dynamic_cast<VariableExpr*>(expr)) {
        if (vars.find(v->name) == vars.end()) {
            // check variable exists
            throw std::runtime_error("Undefined variable: " + v->name);
        }
        return vars[v->name];
    } else if (BinaryExpr* b = dynamic_cast<BinaryExpr*>(expr)) {
        char op = b->op;
        switch (op) {
            case '+':
                return (evaluate(b->left.get(), vars) + evaluate(b->right.get(), vars));
            case '-':
                return (evaluate(b->left.get(), vars) - evaluate(b->right.get(), vars));
            case '*':
                return (evaluate(b->left.get(), vars) * evaluate(b->right.get(), vars));
            case '/':
                return (evaluate(b->left.get(), vars) / evaluate(b->right.get(), vars));
            default: throw std::runtime_error("Unknown operator");
        }
    } else {
        return 0; // end?
    }

}
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

// std::vector<Token> tokens = {
//     {TokenType::LPAREN, "(", 1, 1},
//     {TokenType::NUMBER, "1", 1, 2},
//     {TokenType::PLUS, "+", 1, 4},
//     {TokenType::NUMBER, "2", 1, 6},
//     {TokenType::RPAREN, ")", 1, 7},
//     {TokenType::STAR, "*", 1, 9},
//     {TokenType::NUMBER, "3", 1, 11},
//     {TokenType::END, "", 1, 12}
// };

//     Parser p(tokens);
//     auto ast = p.parse();
//     ast->print();

    std::string input = "(1 + 2) * 3 - x / 2";
    
    Lexer lex(input);
    auto tokens = lex.scanAll();
    
    Parser parser(tokens);
    auto ast = parser.parse();
    
    ast->print();

    std::map<std::string, double> vars = {{"x", 10}};
    double result = evaluate(ast.get(), vars);
    std::cout << result << std::endl;

    return 0;
}