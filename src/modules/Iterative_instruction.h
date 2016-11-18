#ifndef ITERATIVE_INSTRUCTION_H
#define ITERATIVE_INSTRUCTION_H
// ie -> add by Ismail ELFAQIR
#include <vector> // <- ie
#include "Node.h" // <- ie
#include "Instruction.h"
#include "Condition.h"  // <- ie
/*
I think maybe this class will be abstuct  and well not define translate function,
because they are classes how herite from Iterative_instruction like (repeat) and they have there own translation method
*/
//boucles : forall, foreach, while, repeat
class Iterative_instruction :
        public Node /*public Instruction*/  { // <- ie : Iterative_instruction can't herite from Instruction because the bloc for or while can have multiple instructions
protected:
	std::vector<Instruction> instructions; // <- ie all instructions
	Condition condition; // <- ie  the Condition
	//int Iterative_instruction_type;
public:
	Iterative_instruction(); //<- ie
	Iterative_instruction(const Condition &c, const vector<Instruction> &i);  //<- ie
	Iterative_instruction(const Iterative_instruction &i);  //<- ie
	virtual ~Iterative_instruction(); //<- ie
	const Condition & getCondition() const; //<- ie
	const std::vector<Instruction> & getInstructions() const; //<- ie
	void setCondition(const Condition &c); //<- ie
	void setInstructions(std::vector<Instruction> &i); //<- ie
    std::string translate();
};
#endif
