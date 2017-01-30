//
// Created by ROUINEB Hamza
//

#include "Program.h"

Program::Program() : name(""), left_son(nullptr) {}

Program::Program(const string &name, Constants *son) : name(name), right_son(son) {}

Program::Program(const string &name) : name(name), left_son(nullptr) {}

// should it be the name of the class or the program's name
string Program::translate() {
    return name;
}