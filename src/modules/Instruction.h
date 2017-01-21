#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <string>
#include "Node.h"

//TODO do we have to turn it into an abstract class ?
/**
 * @brief
 * @author Antoine GARNIER
 */
class Instruction :
        public Node {
protected:

public:

Instruction();
~Instruction();

    /**
    * @brief Translation of the instruction into it's C++ counterpart
    * @return a string containing the C++ code of the instruction
    *
    * The instance will be translated with it's C++ equivalent using its informations
    * All subclasses, must reimplement this method so that the translation corresponds
    * to their specifications, specificities and own values
    */
    virtual std::string translate() =0;

};

#endif
