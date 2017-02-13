#ifndef WHEN_H
#define WHEN_H

#include "Instruction.h"
#include <vector>

/**
 * @author : Kamal Badri
 * 
 */
class When
        : public Node {

protected:
    Instruction* instruction;
public:
    /* * * * * * * * *
    * CONSTRUCTORS  *
    * * * * * * * * */


    /**
    * Default constructor
    * @author Kamal Badri
    */
    When();


    /**
     * Constructor with parameters
     * Set the Instrcution with parameter passed to the constructor
     * @param instruction
     * @author Kamal Badri
     *
     */
    When(Instruction *instruction);


    /**
    * Copy constructor
    * @param obj
    * @author Kamal Badri
    */
    When(const When &obj);

    /**
    * Destructor
    * @author Kamal Badri
    */
    virtual ~When();

    /* * * * * * * * * * * * * *
    * ACCESSORS  AND MUTATORS *
    * * * * * * * * * * * * * */

    /**
    * getter of the instruction
    * @author Kamal Badri
    */
    Instruction *get_instruction() const;

    /**
    * setter of instruction
    * @param instruction
    * @author Kamal Badri
    */
    void set_instruction(Instruction *instruction);

    /* * * * * * * *
    * Translation  *
    * * * * * * * **/

    /**
    * @brief Translate the begining part of the when instruction
    * @return a string containing the C++ code of the node
    *
    * All subclasses, should reimplement this method so that the translation corresponds
    * to their specifications, specificities and own values
    */
    virtual std::string preTranslate() const;

    /**
     * @brief Translate the end part of the when instruction
     * @return a string containing the C++ code of the instruction
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string postTranslate() const;

};

#endif
