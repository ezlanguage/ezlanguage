#ifndef FOREACH_H
#define FOREACH_H

#include <string>
#include "Node.h"

//exemple d'utilisation : foreach v in vector (traduit en c++ comme ceci : for(auto v : vector))
class Foreach :
        public Node {
protected:

public:
    Foreach();

    std::string traduire();
};

#endif
