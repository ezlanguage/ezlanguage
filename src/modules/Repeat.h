//@author Antoine GARNIER
#ifndef REPEAT_H
#define REPEAT_H

//essential libraries
#include <vector>
#include <string.h>

//special files no to forget to import
#include "Iterative_instruction.h"

/*
 * Using :
 * repeat
 *    instruction_1
 *    instruction_2
 *    ...
 *    instruction_n
 * until condition
 */
class Repeat :
        public Iterative_instruction {
protected:
//    The condition is located in the superclass Iterative_instruction
//    Condition repeat_condition;

public:
    //TODO : constructeur par recopie dans la classe Condition
    Repeat(Condition* repeat_cond, Node* repeat_left_son, Node* repeat_right_son);

    //getters
//    The getter is located in the superclass
//    Condition get_condition(){ return repeat_condition; }

    std::string translate();

};
#endif
