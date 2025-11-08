#ifndef STACK_HPP
#define STACK_HPP

// #include "Node.hpp"
class Node;

class Stack {
private:
    // Pointer to the top node
    Node* top;
public:
    Stack();     // Constructor prototype
    ~Stack();    // Destructor prototype
    void push(int value);    // Prototype
    int pop();               // Prototype
    int peek() const;        // Prototype
    bool isEmpty() const;    // Prototype
};

#endif
