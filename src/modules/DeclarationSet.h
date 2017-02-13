#ifndef DECLARATIONSET_H
#define DECLARATIONSET_H


#include <vector>
#include <iostream>

#include "Node.h"
#include "DeclarationContainer.h"
#include "../hash_table/Variable.h"


/**
 * @class DeclarationSet
 * @brief Class representing set's data structer declarations
 * 
 * @author LAHYANI Zakaria
 */

class DeclarationSet : public Node, public DeclarationContainer
{
  public:
        
    /* * * * * * * * *
    * CONSTRUCTORS  *
    * * * * * * * * */
        

    /**
    * Minimal constructor Takes the set container type, and name (its name)
    * 
    * @param : variable 
    *
    * @author LAHYANI Zakaria
    */
    DeclarationSet(Variable *);

    /**
    * Constructor Takes the container set variable, name and its size
    * 
    * @param : variable 
    * @param : size
    *
    * @author LAHYANI Zakaria
    */
    DeclarationSet(Variable *, int);

    /**
    * Constructor Takes the container set variable, name and its initial values
    * 
    * @param : variable 
    * @param : intial values
    *
    * @author LAHYANI Zakaria
    */
    DeclarationSet(Variable *, std::vector<std::string>);

    /**
    * Copy COnstructor 
    *  
    * @param : container Container 
    * 
    * @author LAHYANI Zakaria
    */
    DeclarationSet(const DeclarationSet&);



    /* * * * * * * *
    * Translation  *
    * * * * * * * **/
        

    /**
     * @brief Translation of the instruction into it's C++ counterpart
     * @return a string containing the C++ code of the declaration
     * 
     * The instance will be translated with it's C++ equivalent using its informations
     * The translation corresponds to its specifications, specificities and values
     */
    virtual std::string preTranslate() const;


};

#endif // DECLARATIONSET_H
