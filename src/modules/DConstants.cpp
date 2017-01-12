//
// Created by ROUINEB Hamza
//

#include "DConstants.h"

DConstants::DConstants() : Holder("", Holder::TYPES::CONST) {}

DConstants::DConstants(const string &name) : Holder(name, Holder::TYPES::CONST) {}

string DConstants::translate() {
    // same thing : not yet implemented
    return "";
}
