//@author : GARNIER Antoine
#ifndef NODE_H
#define NODE_H

#include <string>

using namespace std;

//Basic class, used to structure the others classes as nodes of the main tree
class Node {
protected:
	string name;
	Node* left_son;
	Node* right_son;

public:
	Node();
	Node(Node* left, Node* right);
	~Node();

	void setLeftSon(Node *son);
	void setRightSon(Node* son);

	virtual string translate(); // this function will allow the translation of the nodes's tree into c++ instructions
};

#endif //NODE_H
