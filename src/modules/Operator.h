//@author : GARNIER Antoine
#ifndef OPERATOR_H
#define OPERATOR_H

#define UNARY 1
#define BINARY 2

#define LOGICAL 1
#define ARITHMETIC 2
#define ALLOCATION 3
#define COMPARISON 4
#define INCREMENT 5

#include "Node.h"

class Operator
        : public Node{

protected:
    //in the yacc file, "Operator(LOGICAL, "and")" could be called, given the appropriate token
    int ope_nb; //operand's number, 1 = unary operator, 2 = binary operator...etc
    int ope_type; //operator's type (1 : logical, 2 : arithmetic, 3 : allocation, 4 : comparison...etc)
    string ope; //operator's value

public:
    Operator();
    Operator(int ope_type, string ope);

    // this function will allow the translation of the nodes's tree into c++ instructions
    string translate();
};


#endif //OPERATEUR_H
