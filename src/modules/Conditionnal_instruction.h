#ifndef CONDITIONNAL_INSTRUCTION_H
#define CONDITIONNAL_INSTRUCTION_H
// ie -> add by Ismail ELFAQIR
#include <vector> // <- ie
#include "Node.h" // <- ie
#include "Condition.h" // <- ie
#include "Instruction.h"

// <- ie condition if, condition if else or condition when
#define CIf 1  
#define CIfElse 2 
#define CWhen 3

//Class for the instructions :
// ez language : If / c++ : if
// ez language : when / c++ : switch
class Conditionnal_instruction :
       public Node/*public Instruction*/ { // <- ie : Conditionnal_instruction can't herite from Instruction because the bloc if can have multiple instructions
       									 // <- ie : for more see the language validated document by ANDRES Hervé "les_fonctions_procédures_conditions"
protected:
	std::vector< std::vector<Instruction> > instructions; // <- ie all instructions in case we have (if and else) or (when) with multiple cases
	std::vector<Condition> conditions; // <- ie all Condition in case we have (when)
	int condition_type; // <- ie 
public:
	Conditionnal_instruction();
	Conditionnal_instruction(const std::vector< std::vector<Instruction> >& inst, 
							 const std::vector<Condition> &c,
							 int ct
							); // <- ie
	Conditionnal_instruction(const Conditionnal_instruction &c);  // <- ie
	const std::vector<Condition> & get_conditions() const; // <- ie get all coditions
	const std::vector< std::vector<Instruction> > & get_instructions() const; // <- ie get all instructions
	std::string translate(); // <- ie translate to c++
	~Conditionnal_instruction();
};

#endif
