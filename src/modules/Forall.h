#ifndef FORALL_H
#define FORALL_H

#include <string>
#include "Boucle.h"

//exemple d'utilisation : forall i in 1..10 step 2 (le pas "step" est optionnel)
//utilisation des classes Declaration, Condition et Instruction
class Forall :
        public Boucle {
protected:

public:
    Forall();

    std::string traduire();
};

#endif
