#ifndef FOREACH_H
#define FOREACH_H

#include "Iterative_instruction.h"

//using example : foreach v in vector (it is translated in c++ like this : for(auto v : vector))
class Foreach :
        public Iterative_instruction {
protected:

public:
    Foreach();

    std::string translate();
};

#endif
