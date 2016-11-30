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
    Condition repeat_condition; // iteration condition of the loop
    std::vector<std::string> instructions; //vector containing all the instructions of the loop

public:
    //TODO : constructeur par recopie dans la classe Condition
    Repeat(Condition repeat_cond, std::vector<std::string> instructions);

    //getters
    Condition get_condition();
    std::vector<std::string> get_instructions();

    std::string translate();

};
#endif
