#include "stack.hpp"

Stack::Stack(){};     // Constructor prototype
Stack::~Stack()=default;    // Destructor prototype
void Stack::push(int value);    // Prototype
int Stack::pop();               // Prototype
int Stack::peek() const;        // Prototype
bool Stack::isEmpty() const;    // Prototype