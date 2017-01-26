#ifndef WHILE_H
#define WHILE_H

//essential libraries
#include <vector>
#include <string.h>

//special files no to forget to import
#include "Iterative_instruction.h"

/**
 * @brief 
 * 
 * @details Using :
 * while condition do
 *    instruction_1
 *    instruction_2
 *    ...
 *    instruction_n
 * end while
 * 
 * @author Antoine GARNIER
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
    
    /**
     * @brief Translation of the instruction into it's C++ counterpart
     * @return a string containing the C++ code of the while instruction
     * 
     * The instance will be translated with it's C++ equivalent using its informations
     * The translation corresponds to its specifications, specificities and values
     */
    std::string translate();
};

#endif
