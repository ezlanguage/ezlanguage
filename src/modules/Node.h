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

    virtual string translate() =0; // this function will allow the translation of the nodes's tree into c++ instructions
    Node * get_left_son() const;
    Node * get_right_son() const;
	void setLeftSon(Node *son);
	void setRightSon(Node* son);

	virtual string translate(); // this function will allow the translation of the nodes's tree into c++ instructions
};

#endif //NODE_H
