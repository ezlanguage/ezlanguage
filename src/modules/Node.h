#ifndef NODE_H
#define NODE_H

#include <string>

using namespace std;

//classe basique dont les autres classes vont heriter pour en avoir la structure
class Node{
protected:
    string name;
    Node* left_son;
    Node* right_son;

public:
    Node(){};
    virtual string traduire() =0; //va permettre de traduire les elements du noeud en instructions c++
    ~Node(){};
};

#endif //NODE_H
