//@author : GINISTY Valentin
#ifndef ARRAY_H
#define ARRAY_H

#include <string>
#include "Node.h"

class Array :
        public Node {
protected:
    int begin_iterateur;
    int end_iterateur;

public:
    Array();
    Array(int begin_it, int end_it);

    std::string translate();
};

#endif