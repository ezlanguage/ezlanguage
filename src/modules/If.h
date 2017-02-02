#ifndef IF_H
#define IF_H

#include "Conditionnal_instruction.h"

#define block_if 1  
#define block_else_if 2 
#define block_else 3

/**
 * @brief 
 * @author : Ismail ELFAQIR
 * 
 */
class If 
	: public Conditionnal_instruction {
		
protected:
    int block_type;
	
public:
    /* * * * * * * * *
    * CONSTRUCTORS  *
    * * * * * * * * */


    /**
    * Default constructor
    * Set block_type to block_else
    * @author Ismail ELFAQIR
    */
    If();

    /**
    * Constructor with parameters
    * Set the block_type to the parameter passed to the constructor
    * @param bt : the block_type
    * @author Ismail ELFAQIR
    */
    If(int bt);

    /**
    * Constructor with parameters
    * Set the condition to the parameter passed to the constructor and the block_type to block_else
    * @param c : pointer to the condition
    * @author Ismail ELFAQIR
    */
    If(Condition *c);

    /**
    * Constructor with parameters
    * Set the block_type and the condition to the parameter passed to the constructor
    * @param c : pointer to the condition
    * @param bt : the block_type
    * @author Ismail ELFAQIR
    */
    If(Condition *c, int bt);

    /**
    * Copy constructor
    * @param obj : the If to copy
    * @author Ismail ELFAQIR
    */
    If(const If &obj);

    /**
    * Destructor
    * @author Ismail ELFAQIR
    */
    virtual ~If();

    /* * * * * * * * * * * * * *
    * ACCESSORS  AND MUTATORS *
    * * * * * * * * * * * * * */

    /**
    * getter of the block_type
    * @author Ismail ELFAQIR
    */
    int get_block_type() const;

    /**
    * setter of block_type
    * @param bt : the block_type
    * @author Ismail ELFAQIR
    */
    void set_block_type(int bt);

    /* * * * * * * *
    * Translation  *
    * * * * * * * **/
    
    /**
     * @brief Translate the begining part of the If
     * @return a string containing the C++ code of the If
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string preTranslate() const;
    
    /**
     * @brief Translate the end part of the If
     * @return a string containing the C++ code of the If
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string postTranslate() const;

};
#endif
