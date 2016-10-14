#ifndef REPEAT_H
#define REPEAT_H

#include "Iterative_instruction.h"

//repeat until
class Repeat :
        public Iterative_instruction {
protected:

public:
    Repeat();

    std::string translate();

};
#endif
