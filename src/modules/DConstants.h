//
// Created by ROUINEB Hamza
//

#ifndef PROJECT_CONSTANTS_H
#define PROJECT_CONSTANTS_H

#include "Holder.h"

class DConstants : public Holder {

public:
    DConstants();

    DConstants(const string &name, DTypes *son);

    DConstants(const string &name);

    string translate();

};

#endif //PROJECT_CONSTANTS_H
