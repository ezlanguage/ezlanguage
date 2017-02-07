#ifndef FORALL_H
#define FORALL_H

#include "Iterative_instruction.h"
#include <string>

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
     * @brief Translate the begining part of the Forall
     * @return a string containing the C++ code of the node
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string preTranslate() const;
    
    /**
     * @brief Translate the end part of the Forall
     * @return a string containing the C++ code of the instruction
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string postTranslate() const;
};

#endif
