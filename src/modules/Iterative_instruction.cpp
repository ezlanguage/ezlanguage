//@author : ELFAQIR Ismail
#include "Iterative_instruction.h"
#include <iostream>
using namespace std;


Iterative_instruction::Iterative_instruction(){
	name="Iterative instruction";
}

// constructor with parametres
Iterative_instruction::Iterative_instruction(const Condition &c, const vector<Instruction> &i)
	:condition(c), instructions(i) {	
	name="Iterative instruction";
}

// copy constructor
Iterative_instruction::Iterative_instruction(const Iterative_instruction &i)
	:condition(i.condition), instructions(i.instructions) {	
	name="Iterative instruction";
}

Iterative_instruction::~Iterative_instruction(){
}

// geters
const Condition & Iterative_instruction::getCondition() const{
	return condition;
}

const vector<Instruction> & Iterative_instruction::getInstructions() const{
	return instructions;
}

// seters
void Iterative_instruction::setCondition(const Condition &c) {
	condition=c;
}

void Iterative_instruction::setInstructions(vector<Instruction> &i) {
	instructions=i;
}

string Iterative_instruction::translate(){};
