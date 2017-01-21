//
// Created by ROUINEB Hamza
//

#ifndef PROJECT_DTYPES_H
#define PROJECT_DTYPES_H

#include <string>
#include <iostream>

#include "Holder.h"

class DTypes : public Holder {

public:
    DTypes();

    DTypes(const std::string &name);

    std::string translate() const;

};


#endif //PROJECT_DTYPES_H
