//
// Created by ROUINEB Hamza
//

#include "DConstants.h"

DConstants::DConstants() : Holder("", Holder::TYPES::CONST) {}

DConstants::DConstants(const std::string &name) : Holder(name, Holder::TYPES::CONST) {}

DConstants::DConstants(const std::string &name, DTypes *son) : Holder(name, Holder::TYPES::CONST) {
    this->setRightSon(son);
}
