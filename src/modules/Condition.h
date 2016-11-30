#ifndef CONDITION_H
#define CONDITION_H

#include <string>
#include "Node.h"

//boolean value (used in the loop)
class Condition :
        public Node {
protected:

public:
    Condition();

    std::string translate();

};

#endif