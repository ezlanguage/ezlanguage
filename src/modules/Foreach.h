#ifndef FOREACH_H
#define FOREACH_H

#include <string>
#include "Boucle.h"

//exemple d'utilisation : foreach v in vector (traduit en c++ comme ceci : for(auto v : vector))
class Foreach :
        public Boucle {
protected:

public:
    Foreach();

    std::string traduire();
};

#endif
