#ifndef CONDITION_H
#define CONDITION_H

#include <string>
#include "Node.h"

class Condition :
        public Node {
protected:

public:
    Condition();

    std::string traduire();

};

#endif