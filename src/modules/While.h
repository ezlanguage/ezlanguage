#ifndef WHILE_H
#define WHILE_H

#include "Instruction_iterative.h"

class While :
        public Instruction_iterative {
protected:

public:
    While();

    std::string traduire();

};

#endif
