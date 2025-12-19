#include <iostream>
#include <vector>
#include <stdexcept>

// class template definition
template <class T>
class Stack {

    std::vector<T> s;

    public:

    void push(T ele){
        // s.emplace_back(ele);
        s.push_back(ele);
    }

    bool empty() const{
        return s.empty();
    }

    T peek() const {
        if (s.empty()){
            throw std::runtime_error("empty stack\n");
        }
        return s.back();
    }

    T pop() {
        if (s.empty()){
            throw std::runtime_error("empty stack\n");
        }
        T tmp = s.back();
        s.pop_back();
        return tmp;
    }

    size_t size() const {
        return s.size();
    }

};

int main() {
    Stack<int> s;
    
    std::cout << s.empty() << std::endl;  // 1 (true)
    
    s.push(10);
    s.push(20);
    s.push(30);
    
    std::cout << s.peek() << std::endl;   // 30
    std::cout << s.pop() << std::endl;    // 30
    std::cout << s.pop() << std::endl;    // 20
    std::cout << s.size() << std::endl;   // 1
    std::cout << s.empty() << std::endl;  // 0 (false)
    
    return 0;
}