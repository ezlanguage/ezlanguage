//
// Created by ROUINEB Hamza
//

#ifndef PROJECT_CONSTANTS_H
#define PROJECT_CONSTANTS_H

#include <string>

#include "DTypes.h"

class DConstants : public Holder {

public:
    DConstants();

    DConstants(const std::string &name, DTypes *son);

    DConstants(const std::string &name);
};

#endif //PROJECT_CONSTANTS_H
