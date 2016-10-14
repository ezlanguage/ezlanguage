#ifndef ARRAY_H
#define ARRAY_H

#include <string>
#include "Node.h"

class Array :
        public Node {
protected:
    int debut_iterateur;
    int fin_iterateur;

public:
    Array();
    Array(int debut_it, int fin_it);

    std::string traduire();
};

#endif