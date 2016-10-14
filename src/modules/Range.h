#ifndef RANGE_H
#define RANGE_H

#include <string>
#include "Node.h"

//classe utilisee pour le forall i in 1..10
class Range :
        public Node {
private:
    int debut_iterateur;
    int fin_iterateur;

public:
    Range();
    Range(int debut_it, int fin_it);

    std::string traduire();
};


#endif
