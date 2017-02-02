/**
 * @author Kamal Badri
 */

#include "PDInstructions.h"

PDInstructions::PDInstructions() {}

PDInstructions::PDInstructions(const std::string &name) : Holder(name, Holder::TYPES::INST) {
    this->setRightSon(nullptr);
}

std::string PDInstructions::translate() {
    return "";
}
