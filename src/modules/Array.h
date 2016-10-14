//@author : GINISTY Valentin
#ifndef ARRAY_H
#define ARRAY_H

#include <string>
#include "Node.h"

class Array :
        public Node {
protected:
    int start_iterateur;
    int end_iterateur;

public:
    Array();
    Array(int start_it, int end_it);

    std::string translate();
};

#endif