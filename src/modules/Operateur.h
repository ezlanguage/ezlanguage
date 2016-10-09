#ifndef OPERATEUR_H
#define OPERATEUR_H

#include "Node.h"

using namespace std;

class Operateur
        : public Node{

private:
    //dans le fichier yacc on pourra appeler (Operateur(LOGIQUE, "and") avec un token explicite)
    int nb_ope; //nombre d'operandes, 1 = operateur unaire, 2 = operateur binaire...etc
    int type_ope; //type d'operateur (1 : logique, 2 : arithmetique, 3 : comparaison...etc)
    string ope; //valeur de l'operateur

public:
    Operateur();
    Operateur(int type_ope, string ope);

    //fonction qui permet d'ecrire les lignes C++ a partir de l'arbre
    string traduire();
};


#endif //OPERATEUR_H
