//@author Antoine GARNIER
#ifndef WHILE_H
#define WHILE_H

//essential libraries
#include <vector>
#include <string.h>

//special files no to forget to import
#include "Iterative_instruction.h"

/*
 * Using :
 * while condition do
 *    instruction_1
 *    instruction_2
 *    ...
 *    instruction_n
 * end while
 */
class While :
        public Iterative_instruction {
protected:
//    The condition is located in the superclass Iterative_instruction
//    Condition while_condition; // iteration condition of the loop

//    The instructions aren't stored in this class
//    They are chained and the first element of this chain is left_son of this class
//    The following instructions are found by translating the right son of each chained element

public:
    //TODO : constructeur par recopie dans la classe Condition

    While(Condition* while_cond, Node* while_left_son, Node* while_right_son);

    //getters
//    Condition get_condition(){ return while_condition; }

    std::string translate();
};

#endif
