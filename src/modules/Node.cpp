#include "Node.h"

Node::Node(): left_son(nullptr), right_son(nullptr)
{};

Node::~Node()
{};

Node * Node::get_left_son() const {
	return left_son;
}
Node * Node::get_right_son() const{
	return right_son;
}
