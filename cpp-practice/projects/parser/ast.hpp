#pragma once
#include <memory>
#include <string>
#include <iostream>

struct Expr {
    virtual ~Expr() = default;
    virtual void print(int indent = 0) = 0;
};

struct NumberExpr : Expr {
    double value;

    // constructor, print()
    NumberExpr(double v) : value{v} {};
    void print(int indent = 0) override {
        std::cout << std::string(indent, ' ') << "NumberExpr(" + std::to_string(value) + ")\n";
    }
};

struct VariableExpr : Expr {
    std::string name;

    // constructor, print()
    VariableExpr(std::string s) : name{s} {};
    void print(int indent = 0) override {
        std::cout << std::string(indent, ' ') << "VariableExpr(" + name + ")\n";
    }
};

struct BinaryExpr : Expr {
    char op;
    std::unique_ptr<Expr> left;
    std::unique_ptr<Expr> right;

    // constructor, print()

    BinaryExpr(char operation, std::unique_ptr<Expr> l, std::unique_ptr<Expr> r) {
        op = operation;
        left = std::move(l);
        right = std::move(r);
    }

    void print(int indent = 0) override {
        std::cout << std::string(indent, ' ') << "BinaryExpr(" << op << ")\n";
        left->print(indent + 2);
        right->print(indent + 2);

    }
};