#ifndef ITERATIVE_INSTRUCTION_H
#define ITERATIVE_INSTRUCTION_H

#include "Node.h" 
#include "Condition.h"

/**
 * @brief 
 * @author : Ismail ELFAQIR
 * 
 * loops : forall, foreach, while, repeat
 */

/*
	Iterative_instruction can't herite from Instruction because the bloc for or while can have multiple instructions
*/
class Iterative_instruction :
        public Node /*public Instruction*/  { 
protected:
	Condition *condition; // condition if it's an for or while 
public:
        /* * * * * * * * *
        * CONSTRUCTORS  *
        * * * * * * * * */


        /**
        * Default constructor
        * Set condition to NULL
        * @author Ismail ELFAQIR
        */
        Iterative_instruction();

        /**
        * Default constructor
        * Set the condition to the parameter passed to the constructor
        * @param c : pointer to the condition
        * @author Ismail ELFAQIR
        */
        Iterative_instruction(Condition *c);

        /**
        * Copy constructor
        * @param c : the Iterative_instruction
        * @author Ismail ELFAQIR
        */
        Iterative_instruction(const Iterative_instruction &i);

        /**
        * Destructor
        * @author Ismail ELFAQIR
        */
        virtual ~Iterative_instruction();

        /* * * * * * * * * * * * * *
        * ACCESSORS  AND MUTATORS *
        * * * * * * * * * * * * * */

        /**
        * getter of the condition
        * @author Ismail ELFAQIR
        */
        Condition * getCondition() const;

        /**
        * setter of condition
        * @param c : pointer of the condition
        * @author Ismail ELFAQIR
        */
        void setCondition(Condition *c);

        /* * * * * * * *
        * Translation  *
        * * * * * * * **/

};
#endif
