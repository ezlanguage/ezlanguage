#ifndef REPEAT_H
#define REPEAT_H

#include "Instruction_iterative.h"

//repeat until
class Repeat :
        public Instruction_iterative {
protected:

public:
    Repeat();

    std::string traduire();

};
#endif
