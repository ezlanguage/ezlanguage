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
	string left_translate = "";
	string right_translate = "";
	if (left_son != NULL)
		left_translate = left_son->translate();
	if (right_son != NULL)
		right_translate = right_son->translate();
	return "traduction noeud" + left_translate + "\n" + right_translate;
}
