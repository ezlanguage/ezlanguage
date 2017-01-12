#include "Node.h"

Node::Node() {};

Node::Node(const string &name) : name(name) {}

void Node::set_left(Node *left) {
    left_son = left;
}

void Node::set_right_son(Node *right) {
    right_son = right;
}