#include <iostream>
#include <stack>

void printStackElement(std::stack<int> stack) {
    while (!stack.empty()) {
        std::cout << stack.top() << std::endl;
        stack.pop();
    }
}

int main() {
    // empty, size, push, pop, top
    std::stack<int> numbersStack;
    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);
    numbersStack.pop();

    printStackElement(numbersStack);

    // numbersStack.pop();
    // numbersStack.pop();
    // numbersStack.pop();

    if (numbersStack.empty()) {
        std::cout << "stack is empty" << std::endl;
    }else {
        std::cout << "stack is not empty" << std::endl;
    }

    std::cout << "stack size is " << numbersStack.size() << std::endl;
    
    return 0;
}