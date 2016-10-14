#ifndef FORALL_H
#define FORALL_H

#include "Node.h"
#include <string>

//exemple d'utilisation : forall i in 1..10 step 2 (le pas "step" est optionnel)
//utilisation des classes Declaration, Condition et Instruction
class Forall
        : public Node {
protected:
    int indice_debut;
    int indice_fin;
    int step;
    int imbrication;
public:
    Forall(int indice_debut, int indice_fin, int step, int imbrication);
    std::string traduire();
};

#endif
