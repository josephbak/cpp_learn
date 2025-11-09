#include <iostream>
#include <string>
#include "node.hpp"
#include "stack.hpp"


int main(){

    Stack s{};
    std::string exp{};

    // std::cout << "Please type an arithematic expression: " << std::endl;
    std::cout << "postfix expression: ";
    std::getline(std::cin >> std::ws, exp);
    // std::cout << exp;

    for (char& c : exp){
        if (isdigit(c)) {
            s.push(c - '0');
        } else if (c != ' '){
            int right {s.pop()};
            int left  {s.pop()};
            switch (c) {
                case '+':
                    s.push(left + right);
                    break;
                case '-':
                    s.push(left - right);
                    break;
                case '*':
                    s.push(left * right);
                    break;
                case '/':
                    s.push(left / right);
                    break;
                }
        }
    }


    int ans {s.pop()};
    std::cout << "The answer is: " << ans << std::endl;

    return 0;
}