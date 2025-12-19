#include <iostream>

template<typename T>
struct Node {
    T val;
    Node* next = nullptr;

    public:
    Node(T ele) : val{ele} {}
};

template <typename T>
class LinkedList {

    Node<T>* head;
    Node<T>* tail;
    size_t length = 0;

    public:
    LinkedList() {
        head = NULL;
        tail = head;
    }

    ~LinkedList() {
        while (head) {
            Node<T>* tmp = head;
            head = head->next;
            delete tmp; // free the memory
        }
    }

    void append(T ele) {
        // heap allocation for persistance
        Node<T>* new_node = new Node<T>(ele);
        if (!tail) {
            head = tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
        length++;
    }

    void prepend(T ele) {
        Node<T>* new_node = new Node<T>(ele);
        if (!head) {
            head = tail = new_node;
        } else {
            new_node->next = head;
            head = new_node;
        }
        length++;
    }

    void print() {
        Node<T>* tmp = head;
        while (tmp) {
            std::cout << tmp->val;
            tmp = tmp->next;
            if (tmp) {
                std::cout << " -> ";
            }
        }
        std::cout << " -> nullptr\n";
    }

    void remove(T ele) {
    Node<T>* prev = nullptr;
    Node<T>* curr = head;
    
    while (curr) {
        if (curr->val == ele) {
            // Found it — relink
            if (prev) {
                prev->next = curr->next;
            } else {
                head = curr->next;  // removing head
            }
            if (curr == tail) {
                tail = prev;  // removing tail
            }
            delete curr;
            length--;
            return;
        }
        prev = curr;
        curr = curr->next;
    }
    std::cout << ele << " is not in the list." << std::endl;
    }

    size_t size() {
        return length;
    }

};


int main() {
    LinkedList<int> list;
    
    list.append(1);
    list.append(2);
    list.append(3);
    list.print();  // 1 -> 2 -> 3 -> nullptr
    
    list.prepend(0);
    list.print();  // 0 -> 1 -> 2 -> 3 -> nullptr
    
    std::cout << list.size() << std::endl;  // 4
    
    list.remove(2);
    list.print();  // 0 -> 1 -> 3 -> nullptr
    
    return 0;
}