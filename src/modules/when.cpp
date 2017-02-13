//@author : BADRI Kamal
#include <string>
#include "when.h"

using namespace std;

When::When() {}

When::When(const When &obj) : instruction(obj.get_instruction()) {
}

When::When(Instruction *instruction) : instruction(instruction) {}

Instruction *When::get_instruction() const { return this->instruction; }

void When::set_instruction(Instruction *instruction) { this->instruction = instruction; }


std::string When::preTranslate() const {
    return "switch (" + this->instruction->translate() + " {\n";
}

std::string When::postTranslate() const {
    return "}\n";
}


When::~When() {

}