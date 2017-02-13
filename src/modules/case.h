#ifndef CASE_H
#define CASE_H

#include "../hash_table/Variable.h"
#include "Instruction.h"
#include <vector>

/**
 * @author : Kamal Badri
 * 
 */
class Case
        : public Node {

protected:
    Variable *constant;
public:
    /* * * * * * * * *
    * CONSTRUCTORS  *
    * * * * * * * * */


    /**
    * Default constructor
    * @author Kamal Badri
    */
    Case();


    /**
     * Constructor with parameters
     * Set the constant with parameter passed to the constructor
     * @param constant
     *
     */
    Case(Variable *constant);

    /**
    * Copy constructor
    * @param obj
    * @author Kamal Badri
    */
    Case(const Case &obj);

    /**
    * Destructor
    * @author Kamal Badri
    */
    virtual ~Case();

    /* * * * * * * * * * * * * *
    * ACCESSORS  AND MUTATORS *
    * * * * * * * * * * * * * */

    /**
    * getter of the constant
    * @author Kamal Badri
    */
    Variable *get_constant() const;

    /**
    * setter of constant
    * @param variable
    * @author Kamal Badri
    */
    void set_constant(Variable *constant);


    /**
     * @brief Translate the begining part of the when case
     * @return a string containing the C++ code of the node
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string preTranslate() const;

    /**
     * @brief Translate the end part of the when case
     * @return a string containing the C++ code of the instruction
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string postTranslate() const;
};

#endif
