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
// <<<<<<< HEAD
// private:
//     /// all Condition in case we have (when)
//     std::vector<Condition> conditions;
//     /// all instructions in case we have (if and else) or (when) with multiple cases
//     std::vector< std::vector<Instruction> > instructions;
//
// public:
//     Conditionnal_instruction(const std::vector< std::vector<Instruction> >& inst,
//     						 const std::vector<Condition> &c,
//     						 int ct
//     						);
//
//     /**
//      * @brief getter of all conditions
//      */
//     const std::vector<Condition> & get_conditions() const;
// =======
    public Node/*public Instruction*/ { // Conditionnal_instruction can't herite from Instruction because the bloc if can have multiple instructions
    									 //  for more see the language validated document by ANDRES Herv� "les_fonctions_proc�dures_conditions"
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
