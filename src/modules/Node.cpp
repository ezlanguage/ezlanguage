#include "Node.h"

Node::Node(){};

Node::~Node(){};

Node * Node::get_left_son() const {
	return left_son;
}
Node * Node::get_right_son() const{
	return right_son;
}
