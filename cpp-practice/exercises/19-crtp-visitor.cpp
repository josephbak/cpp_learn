#include <iostream>

// AST nodes (simple, no virtual accept)
struct Expr {
    virtual ~Expr() = default;
};

struct NumberExpr : Expr {
    int value;
    NumberExpr(int v) : value(v) {}
};

struct BinaryExpr : Expr {
    char op;
    Expr* left;
    Expr* right;
    BinaryExpr(char o, Expr* l, Expr* r) : op(o), left(l), right(r) {}
};

// CRTP Visitor base
template<typename Derived>
struct ExprVisitor {
    void visit(Expr* e) {
        /* dispatches to visitNumber or visitBinary */
        if (auto* num = dynamic_cast<NumberExpr*>(e))
            static_cast<Derived*>(this)->visitNumber(num);
        else if (auto* bin = dynamic_cast<BinaryExpr*>(e))
            static_cast<Derived*>(this)->visitBinary(bin);
    }
    
    // Default implementations — derived can override
    void visitNumber(NumberExpr*) {}
    void visitBinary(BinaryExpr*) {}
};

struct PrintVisitor : ExprVisitor<PrintVisitor> {
    void visitNumber(NumberExpr* n) {
        std::cout << n->value;
    }

    void visitBinary(BinaryExpr* b) {
        // hint: recursively visit children
        std::cout << "(";
        visit(b->left);
        std::cout << " " << b->op << " ";
        visit(b->right);
        std::cout << ")";
    }
};

// Usage:
// (3 + 5) prints as: (3 + 5)

struct EvalVisitor : ExprVisitor<EvalVisitor> {
    int result = 0;
    void visitNumber(NumberExpr* n) {
        result = n->value;
    }

    void visitBinary(BinaryExpr* b) {
        // hint: visit children, combine results
        visit(b->left);
        int left_val = result;   // save it

        visit(b->right);
        int right_val = result;  // save it

        if (b->op == '+') result = left_val + right_val;
        else if (b->op == '-') result = left_val - right_val;
        else if (b->op == '*') result = left_val * right_val;
        else if (b->op == '/') result = right_val != 0 ? left_val / right_val : 0;
    }
};

// Usage:
// (3 + 5) evaluates to 8

int main() {
    // Build: (3 + 5)
    Expr* tree = new BinaryExpr('+',
        new NumberExpr(3),
        new NumberExpr(5)
    );
    
    PrintVisitor pv;
    pv.visit(tree);  // prints: (3 + 5)
    std::cout << "\n";
    
    EvalVisitor ev;
    ev.visit(tree);
    std::cout << "Result: " << ev.result << "\n";  // 8
}