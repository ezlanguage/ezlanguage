#ifndef CONDITION_H
#define CONDITION_H

#include <string>
#include "Node.h"

/**
 * @brief 
 * @author Antoine GARNIER
 * 
 * boolean value (used in the loop)
 */
class Condition :
        public Node {
protected:

public:
    Condition();
    
    /**
     * @brief Translation of the instruction into it's C++ counterpart
     * @return a string containing the C++ code of the instruction
     * 
     * The instance will be translated with it's C++ equivalent using its informations
     * All subclasses, must reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    std::string translate() const;

};

#endif
