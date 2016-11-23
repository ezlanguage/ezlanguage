//@author : GINISTY Valentin
#ifndef FOREACH_H
#define FOREACH_H

#include "Iterative_instruction.h"
#include "Include_c++/String_addon.h"

using namespace std;

//using example : foreach v in vector (it is translated in c++ like this : for(auto v : vector))
class Foreach :
        public Iterative_instruction {
protected:
    string element;
    string vector;
public:
    Foreach(string element, string vector);
    std::string translate();
};

#endif
