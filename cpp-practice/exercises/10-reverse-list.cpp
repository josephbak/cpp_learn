#include <iostream>


struct Node {
    int val;
    Node* next = nullptr;

    Node(int v) : val(v) {}
};

class LinkedList {
    Node* head = nullptr;
    Node* tail = nullptr;
    
public:
    ~LinkedList() {
        Node* curr = head;
        while (curr) {
            Node* tmp = curr;
            curr = curr->next;
            delete tmp;
        }
    }

    void append(int ele) {
        Node* tmp = new Node(ele);
        if (!head) {
            // first node
            head = tail = tmp;
        } else {
            tail->next = tmp;
            tail = tmp;
        }
    }

    void print() {
        if (!head){
            std::cout << "empty list.";
            return;
        }

        Node* curr = head;
        while (curr) {
            std::cout << curr->val << " -> ";
            if (!curr->next) {
                std::cout << "nullptr\n";
            }
            curr = curr->next;
        }
    }

    void reverse(){
        if (!head) {
            // empty list.
            return;
        }

        Node* prev = nullptr;
        Node* curr = head;
        Node* nxt = head->next;

        tail = head;

        while (nxt) {
            curr->next = prev;
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
        }
        curr->next = prev; // the last one
        head = curr;
    }
};


int main() {

    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.print();    // 1 -> 2 -> 3 -> 4 -> nullptr
    
    list.reverse();
    list.print();    // 4 -> 3 -> 2 -> 1 -> nullptr
    
    return 0;
}