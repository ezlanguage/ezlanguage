//@author : ELFAQIR Ismail
#include "Iterative_instruction.h"
#include <iostream>
using namespace std;


Iterative_instruction::Iterative_instruction(){
	name="Iterative instruction";
}

Iterative_instruction::Iterative_instruction(Condition *c):condition(c) {	
	name="Iterative instruction";
}

Iterative_instruction::Iterative_instruction(const Iterative_instruction &i):condition(i.condition) {	
	name="Iterative instruction";
}

Iterative_instruction::~Iterative_instruction(){
}

Condition * Iterative_instruction::getCondition() const{
	return condition;
}

void Iterative_instruction::setCondition(Condition *c) {
	condition=c;
}

