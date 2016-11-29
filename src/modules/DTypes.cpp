//
// Created by ROUINEB Hamza
//

#include "DTypes.h"

DTypes::DTypes() : _type(Holder::TYPES::TYPE), name("") {}


DTypes::DTypes(const string &name) : name(name), _type(Holder::TYPES::TYPE) {}

string DTypes::translate() {
    // still waiting
    return "";
}
