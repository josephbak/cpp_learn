#ifndef NODE_HPP
#define NODE_HPP

class Node {
private:
    int m_data;
    Node* next;
public:
    Node(int data);
    ~Node();
    int getData() const;
    Node* getNext() const;
    void setNext(Node* n);
};

#endif