#include "stack.hpp"
#include "node.hpp"
#include <cstddef>
#include <stdexcept>

Stack::Stack() : top{nullptr} {}
Stack::~Stack(){
    while (top) {
        Node* tmp = top;
        top = top->getNext();
        delete tmp;
    }
}
void Stack::push(int value){
    Node* new_node = new Node(value);
    new_node->setNext(top);
    top = new_node;
}
int Stack::pop(){
    if (!top) {
        // empty stack
        throw std::runtime_error("stack underflow");
    }
    Node* tmp = top;
    int data = tmp->getData();
    top = tmp->getNext();
    delete tmp;
    return data;
}
int Stack::peek() const{
    if (!top) {
        // emptyy stack
        throw std::runtime_error("stack underflow");
    }
    return top->getData();
}
bool Stack::isEmpty() const{
    return top == nullptr;
}