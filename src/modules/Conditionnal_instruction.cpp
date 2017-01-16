//@author : ELFAQIR Ismail
#include "Conditionnal_instruction.h"
#include <iostream>
using namespace std;

Conditionnal_instruction::Conditionnal_instruction(){
	name= "Conditionnal instruction";
}
*/
Conditionnal_instruction::Conditionnal_instruction(const vector< vector<Instruction> >& inst,
										           const vector<Condition> &c,
												   int ct
												   ):instructions(inst),conditions(c),condition_type(ct)
{
	name= "Conditionnal instruction";
}
Conditionnal_instruction::Conditionnal_instruction(const Conditionnal_instruction &c):condition(c.condition){
	name= "Conditionnal instruction";	
}
Conditionnal_instruction::~Conditionnal_instruction() {
}
Condition * Conditionnal_instruction::get_condition() const {
	return condition;
}

void Conditionnal_instruction::set_condition(Condition * c) {
	condition=c;
}
