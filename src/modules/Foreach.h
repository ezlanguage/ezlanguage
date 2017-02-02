#ifndef FOREACH_H
#define FOREACH_H

#include "Iterative_instruction.h"

/**
 * @brief 
 * @author : GINISTY Valentin
 * 
 * using example : foreach v in vector (it is translated in c++ like this : for(auto v : vector))
 */
class Foreach :
        public Iterative_instruction {
protected:
    std::string element;
    std::string vector;
public:
    Foreach(std::string element, std::string vector);
    
    /**
     * @brief Translate the begining part of the Foreach
     * @return a string containing the C++ code of the Foreach
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string preTranslate() const;
    
    /**
     * @brief Translate the end part of the Node
     * @return a string containing the C++ code of the instruction
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string postTranslate() const;
};

#endif
