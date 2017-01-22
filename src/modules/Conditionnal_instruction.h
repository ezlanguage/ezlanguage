#ifndef CONDITIONNAL_INSTRUCTION_H
#define CONDITIONNAL_INSTRUCTION_H

#include <vector>
#include <string>

#include "Node.h"
#include "Condition.h"
#include "Instruction.h"

// <- ie condition if, condition if else or condition when
#define CIf 1
#define CIfElse 2
#define CWhen 3

/**
 * @brief Represents conditional instructions
 * @authors : Ismail ELFAQIR, ROUINEB Hamza
 *
 * ez language : If / c++ : if
 * ez language : when / c++ : switch
 */
class Conditionnal_instruction :
    public Node/*public Instruction*/ { // Conditionnal_instruction can't herite from Instruction because the bloc if can have multiple instructions
    									 //  for more see the language validated document by ANDRES Hervé "les_fonctions_procédures_conditions"
private:
    Condition *condition;
    int condition_type;

public:

    /* * * * * * * * *
    * CONSTRUCTORS  *
    * * * * * * * * */

    /**
    * @brief Default constructor
    * @author Ismail ELFAQIR
    *
    * Set condition to NULL
    */
    Conditionnal_instruction();

    /**
    * @brief Constructor with parameters
    * @param c : the condition
    * @author Ismail ELFAQIR
    *
    * Set the condition to the parameter passed to the constructor
    */
    Conditionnal_instruction(Condition *c );

    /**
    * @brief Copy constructor
    * @param c : the Conditionnal_instruction
    * @author Ismail ELFAQIR
    */
    Conditionnal_instruction(const Conditionnal_instruction &c );

    /**
    * @brief Destructor
    */
    virtual ~Conditionnal_instruction();

    /* * * * * * * * * * * * * *
    * ACCESSORS  AND MUTATORS *
    * * * * * * * * * * * * * */

    /**
     * @brief getter of the condition
     */
    const Condition & get_condition() const;

    /**
     * @brief Get all instructions
     *
     */
    const std::vector< std::vector<Instruction> > & get_instructions() const;

    /**
     * @brief setter of condition
     * @param c : pointer on the condition
     */
    void set_condition(Condition * c);

    /* * * * * * * *
    * Translation  *
    * * * * * * * **/

    /**
     * @brief Translation of the instruction into it's C++ counterpartat
     * @return a std::string containing the C++ code of the condition
     *
     * The instance will be translated with it's C++ equivalent using its informations
     * All subclasses, must reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string translate() const =0;
};

#endif
