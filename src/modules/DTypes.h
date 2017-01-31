//
// Created by ROUINEB Hamza
//

#ifndef PROJECT_DTYPES_H
#define PROJECT_DTYPES_H

#include "PDVariables.h"

class DTypes : public Holder {

public:
    DTypes();

    DTypes(const std::string &name);
    DTypes(const std::string &name, PDVariables *son);

    std::string translate();

};


#endif //PROJECT_DTYPES_H
