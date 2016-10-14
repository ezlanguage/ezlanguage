#ifndef FORALL_H
#define FORALL_H

#include "Iterative_instruction.h"

//using example : forall i in 1..10 step 2 ("step" is optionnal)
//We use the classes "Declaration", "Condition" and "Instruction" here
class Forall :
        public Iterative_instruction {
protected:

public:
    Forall();

    std::string translate();
};

#endif
