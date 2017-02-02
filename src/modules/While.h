#ifndef WHILE_H
#define WHILE_H

//essential libraries
#include <vector>
#include <string>

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
    
    /*** Translations ***/
    
    /**
     * @brief Translate the begining part of the While
     * @return a string containing the C++ code of the instruction
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string preTranslate() const;
    
    /**
     * @brief Translate the end part of the While
     * @return a string containing the C++ code of the instruction
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string postTranslate() const;
};

#endif
