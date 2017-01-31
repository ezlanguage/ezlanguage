/**
 * @author Kamal Badri
 */

#include "PDVariables.h"

PDVariables::PDVariables() : Holder("", Holder::TYPES::VAR) {}

PDVariables::PDVariables(const std::string &name) : Holder(name, Holder::TYPES::VAR) {}

PDVariables::PDVariables(const std::string &name, PDFunctions *right_son) : Holder(name, Holder::TYPES::VAR) {
    this->set_right_son(right_son);
}

std::string PDVariables::translate() {
    return "";
}
