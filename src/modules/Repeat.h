#ifndef REPEAT_H
#define REPEAT_H

//essential libraries
#include <vector>
#include <string.h>

//special files no to forget to import
#include "Iterative_instruction.h"

/**
 * @brief
 * 
 * @details Using :
 * repeat
 *    instruction_1
 *    instruction_2
 *    ...
 *    instruction_n
 * until condition
 * 
 * @author Antoine GARNIER
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

    /**
     * @brief Translation of the instruction into it's C++ counterpart
     * @return a string containing the C++ code of the repeat (for) instruction
     * 
     * The instance will be translated with it's C++ equivalent using its informations
     * All subclasses, must reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    std::string translate();

};
#endif
