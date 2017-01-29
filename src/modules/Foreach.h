#ifndef FOREACH_H
#define FOREACH_H

#include "Iterative_instruction.h"
#include "String_addon.h"

using namespace std;

/**
 * @brief 
 * @author : GINISTY Valentin
 * 
 * using example : foreach v in vector (it is translated in c++ like this : for(auto v : vector))
 */
class Foreach :
        public Iterative_instruction {
protected:
    string element;
    string vector;
public:
    Foreach(string element, string vector);
    
    /**
     * @brief Translation of the instruction into it's C++ counterpart
     * @return a string containing the C++ code of the foreach (for) instruction
     * 
     * The instance will be translated with it's C++ equivalent using its informations
     * The translation corresponds to its specifications, specificities and values
     */
    std::string translate();
};

#endif
