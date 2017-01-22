#include "Node.h"

using namespace std;

Node::Node()
{}

Node::Node(const string &name) : name(name), left_son(nullptr), right_son(nullptr)
{}

Node::~Node()
{
    delete left_son;
    delete right_son;
}


Node * Node::get_left_son() const {
    return left_son;
}

Node * Node::get_right_son() const{
    return right_son;
}

void Node::set_left_son(Node *left) {
    left_son = left;
}

void Node::set_right_son(Node *right) {
    right_son = right;
}

