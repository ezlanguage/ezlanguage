//
// Created by ROUINEB Hamza
//
#include "Program.h"

using namespace std;

Program::Program() : Node("Program")
{}


Program::Program(const string &program_name) : Node("Program"), _program_name(program_name)
{}

Program::Program(const string &program_name, DConstants *son) :Program(program_name)
{
    setRightSon(son);
}

std::string Program::preTranslate() const
{
    return "// Program " + _program_name;
}
