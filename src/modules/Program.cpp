//
// Created by ROUINEB Hamza
//
#include "Program.h"

using namespace std;

Program::Program() : name("PROGRAM ROOT"), left_son(nullptr) {}

Program::Program(const string &name, const Constants *_right_son) : name(name), right_son(_right_son) {}

Program::Program(const string &name) : name(name), left_son(nullptr) {}
