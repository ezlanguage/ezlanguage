#include "Node.h"

Node::Node() {};

Node::Node(Node* left, Node* right)
	: left_son(left), right_son(right)
{};

Node::~Node() {};

void Node::setLeftSon(Node *son) {
	left_son = son;
}

void Node::setRightSon(Node* son) {
	right_son = son;
}

string Node::translate() {
	return "traduction noeud";
}
