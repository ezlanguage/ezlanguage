//
// Created by ROUINEB Hamza
//

#ifndef PROJECT_DTYPES_H
#define PROJECT_DTYPES_H

#include "Holder.h"

class DTypes : public Holder {

public:
    DTypes();

    DTypes(const string &name/* still the other type that should be added afterwards*/);

    string translate();

};


#endif //PROJECT_DTYPES_H
