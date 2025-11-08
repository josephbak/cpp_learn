#include "node.hpp"

Node::Node(int data) : m_data{data}, next(nullptr) {}
Node::~Node() = default;

int Node::getData() const { return m_data; }
Node* Node::getNext() const { return next; }
void Node::setNext(Node* n) { next = n; }