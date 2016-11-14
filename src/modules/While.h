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
    Condition while_condition; // iteration condition of the loop
    std::vector<std::string> instructions; //vector containing all the instructions of the loop

public:
    //TODO : constructeur par recopie dans la classe Condition
    While(Condition while_cond, std::vector<std::string> instructions);

    //getters
    Condition get_condition();
    std::vector<std::string> get_instructions();

    std::string translate();
};

#endif
