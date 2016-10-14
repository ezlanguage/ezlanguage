#ifndef FOREACH_H
#define FOREACH_H

#include "Instruction_iterative.h"

//exemple d'utilisation : foreach v in vector (traduit en c++ comme ceci : for(auto v : vector))
class Foreach :
        public Instruction_iterative {
protected:

public:
    Foreach();

    std::string traduire();
};

#endif
