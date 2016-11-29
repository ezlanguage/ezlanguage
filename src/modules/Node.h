//@author : GARNIER Antoine
#ifndef NODE_H
#define NODE_H

#include <string>

using namespace std;

//Basic class, used to structure the others classes as nodes of the main tree
class Node {
protected:
    string name;
    Node *left_son;
    Node *right_son;

public:
    Node() {};

    /**
     * @author ROUINEB Hamza
     * should perhaps add further control
     */
    void set_right_son(Node *right) {
        right_son = right;
    }

    /**
     * @author ROUINEB Hamza
     * same thing here
     */
    void set_left(Node *left) {
        left_son = left;
    }

    virtual string translate() =0; // this function will allow the translation of the nodes's tree into c++ instructions
    ~Node() {
        delete left_son;
        delete right_son;
    };
};

#endif //NODE_H
