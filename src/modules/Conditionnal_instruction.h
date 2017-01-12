//@author : Ismail ELFAQIR
#ifndef CONDITIONNAL_INSTRUCTION_H
#define CONDITIONNAL_INSTRUCTION_H

#include "Node.h" 
#include "Condition.h" 


//Class for the instructions :
// ez language : If / c++ : if
// ez language : when / c++ : switch
class Conditionnal_instruction :
       public Node/*public Instruction*/ { // Conditionnal_instruction can't herite from Instruction because the bloc if can have multiple instructions
       									 //  for more see the language validated document by ANDRES Hervé "les_fonctions_procédures_conditions"
	protected:
		Condition *condition; 
		
	public:
		
		/* * * * * * * * *
		* CONSTRUCTORS  *
		* * * * * * * * */
	
	
		/**
		* Default constructor
		* Set condition to NULL 
		* @author Ismail ELFAQIR
		*/
		Conditionnal_instruction();
		
		/**
		* Constructor with parameters
		* Set the condition to the parameter passed to the constructor
		* @param c : the condition
		* @author Ismail ELFAQIR
		*/	
		Conditionnal_instruction(Condition *c );
		
		/**
		* Copy constructor
		* @param c : the Conditionnal_instruction 
		* @author Ismail ELFAQIR
		*/	
		Conditionnal_instruction(const Conditionnal_instruction &c );
		
		
		/**
		* Destructor
		* @author Ismail ELFAQIR
		*/
		virtual ~Conditionnal_instruction();
	
		/* * * * * * * * * * * * * *
		* ACCESSORS  AND MUTATORS *
		* * * * * * * * * * * * * */
		
		/**
		* getter of the condition
		* @author Ismail ELFAQIR
		*/	
		Condition * get_condition() const; 
		
		/**
		* setter of condition
		* @param c : pointer of the condition
		* @author Ismail ELFAQIR
		*/	
		void set_condition(Condition * c);
		
		/* * * * * * * *
		* Translation  *
		* * * * * * * **/
		virtual string translate() =0;
};

#endif
