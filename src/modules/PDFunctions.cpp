/**
 * @author Kamal Badri
 */

#include "PDFunctions.h"

PDFunctions::PDFunctions() {}

PDFunctions::PDFunctions(const std::string &name) : Holder(name, Holder::TYPES::FUNC) {}

PDFunctions::PDFunctions(const std::string &name, PDInstructions *right_son) : Holder(name, Holder::TYPES::FUNC) {
    this->set_right_son(right_son);
}

std::string PDFunctions::translate() {
    return "";
}
