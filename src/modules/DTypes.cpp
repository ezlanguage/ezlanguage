//
// Created by ROUINEB Hamza
//

#include "DTypes.h"

DTypes::DTypes() : Holder("", Holder::TYPES::TYPE) {}


DTypes::DTypes(const std::string &name) : Holder(name, Holder::TYPES::TYPE) {}

DTypes::DTypes(const std::string &name, PDVariables *son) : Holder(name, Holder::TYPES::TYPE) {
    this->setRightSon(son);
}

std::string DTypes::translate() {
    // still unclear what to do exactly here !
    return "";
}
