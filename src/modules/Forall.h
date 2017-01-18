#ifndef FORALL_H
#define FORALL_H

#include "Iterative_instruction.h"
#include <string>
#include "String_addon.h"

/**
 * @brief 
 * @author : GINISTY Valentin
 * 
 * example : forall i in 1..10 step 2 (step is optionnal)
 * Use Declaration, Condition and Instruction
 */
class Forall
        : public Iterative_instruction {
protected:
    int ind_begin;
    int ind_end;
    int step;
    int imbrication;
public:
    Forall(int ind_begin, int ind_end, int step, int imbrication);

    /**
     * @brief Translation of the instruction into it's C++ counterpart
     * @return a string containing the C++ code of the forall (for) instruction
     * 
     * The instance will be translated with it's C++ equivalent using its informations
     * The translation corresponds to its specifications, specificities and values
     */
    std::string translate();
};

#endif
