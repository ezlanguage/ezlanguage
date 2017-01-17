#ifndef NODE_H
#define NODE_H

#include <string>

using namespace std;

/**
 * @brief Base class, used to structure the others classes as nodes of the main tree
 * @author : GARNIER Antoine
 * 
 */
class Node{
protected:
    string name;

private:
    Node* left_son;
    Node* right_son;

public:
    Node();
    ~Node();
    
    /**
     * @brief Translation of the instruction into it's C++ counterpart
     * @return a string containing the C++ code of the instruction
     * 
     * The instance will be translated with it's C++ equivalent using its informations
     * All subclasses, must reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
     virtual string translate() =0; // this function will allow the translation of the nodes's tree into c++ instructions*

public:
    /**
     * @brief getter on left son
     */
    Node * get_left_son() const;
    
    /**
     * @brief getter on right son
     */
    Node * get_right_son() const;
    
    /**
     * @brief setter on left son
     * @param node new left son
     */
    void set_left_son(Node* node) { left_son= node; }
    
    /**
     * @brief setter on right son
     * @param node new right son
     */
    void set_right_son(Node* node) { right_son= node; }
    
};

#endif //NODE_H
