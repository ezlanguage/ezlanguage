#ifndef WHILE_H
#define WHILE_H

#include "Iterative_instruction.h"

class While :
        public Iterative_instruction {
protected:

public:
    While();

    std::string translate();

};

#endif
