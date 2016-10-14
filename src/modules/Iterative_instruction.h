#ifndef ITERATIVE_INSTRUCTION_H
#define ITERATIVE_INSTRUCTION_H

#include "Instruction.h"

//boucles : forall, foreach, while, repeat
class Iterative_instruction :
        public Instruction {
protected:

public:

    std::string translate();
};
#endif
