#ifndef OPERATOR_H
#define OPERATOR_H

#define UNARY 1
#define BINARY 2

#define LOGICAL 1
#define ARITHMETIC 2
#define ALLOCATION 3
#define COMPARISON 4
#define INCREMENT 5

#include <string>

#include "Node.h"

using namespace std;

/**
 * @brief 
 * @author : GARNIER Antoine
 * 
 */
class Operator
        : public Node{

protected:
    //in the yacc file, "Operator(LOGICAL, "and")" could be called, given the appropriate token
    int ope_nb; //operand's number, 1 = unary operator, 2 = binary operator...etc
    int ope_type; //operator's type (1 : logical, 2 : arithmetic, 3 : allocation, 4 : comparison...etc)
    string ope; //operator's value

    string operande_1, operande_2;

public:
    //constructors
    Operator();
    Operator(int ope_type, string ope);
    Operator(int ope_nb, int ope_type, string ope, string ope_1, string ope_2);

    string getOperande_1(){ return operande_1; }
    string getOperande_2(){ return operande_2; }

    /**
     * @brief Translation of the instruction into it's C++ counterpart
     * @return a string containing the C++ code of the operator
     * 
     * The instance will be translated with it's C++ equivalent using its informations
     * All subclasses, must reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    string translate();
};


#endif //OPERATEUR_H
