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
    Node();

    Node(const string &name);

    /**
     * @author ROUINEB Hamza
     * should perhaps add further control
     */
    void set_right_son(Node *right);

    /**
     * @author ROUINEB Hamza
     * same thing here
     */
    void set_left(Node *left);

    /*
     * @author ROUINEB Hamza
     * */
    const Node *get_left_son() const {
        return left_son;
    }

    /*
     * @author ROUINEB Hamza
     * */
    const Node *get_right_son() const {
        return right_son;
    }

    virtual string translate() =0; // this function will allow the translation of the nodes's tree into c++ instructions

    /**
     * @author ROUINEB Hamza
     * The destructor should be virtual so it could be called in inner classes !
     * & don't forget to delete the pointers
     */
    virtual ~Node() {
        delete left_son;
        delete right_son;
    };
};

#endif //NODE_H
