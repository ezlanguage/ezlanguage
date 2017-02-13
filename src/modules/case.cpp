//@author : BADRI Kamal
#include <string>
#include "case.h"

using namespace std;

Case::Case() {}

Case::Case(const Case &obj) : constant(obj.get_constant()) {
}

Case::Case(Variable *constant) : constant(constant) {}

Variable *Case::get_constant() const {
    return this->constant;
}


void Case::set_constant(Variable *constant) {
    this->constant = constant;
}


std::string Case::preTranslate() const {
    return "case " + this->constant->get_id() + ":\n";
}

std::string Case::postTranslate() const {
    return "break;\n";  
}

Case::~Case() {
}