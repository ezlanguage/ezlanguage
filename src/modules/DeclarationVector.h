#ifndef DECLARATIONVECTOR_H
#define DECLARATIONVECTOR_H

#include <vector>
#include <iostream>
#include "Node.h"
#include "../hash_table/Variable.h"
#include "DeclarationContainer.h"

/**
 * @class DeclarationVector
 * @brief Class representing vector's data structer declarations
 * 
 * @author LAHYANI Zakaria
 */

class DeclarationVector : public Node , DeclarationContainer
{
   public:
		

    /* * * * * * * * *
    * CONSTRUCTORS  *
    * * * * * * * * */
		

    /**
    * Minimal constructor Takes the container type, and name (its name)
    * 
    * @param : variable 
    *
    * @author LAHYANI Zakaria
    */
    DeclarationVector(Variable *);

    /**
    * Constructor Takes the container variable, name and its size
    * 
    * @param : variable 
    * @param : size
    *
    * @author LAHYANI Zakaria
    */
    DeclarationVector(Variable *,  int);

    /**
    * Constructor Takes the container variable, name and its initial values
    * 
    * @param : variable 
    * @param : intial values
    *
    * @author LAHYANI Zakaria
    */
    DeclarationVector(Variable *, std::vector<std::string>);

    /**
    * Copy COnstructor 
    *  
    * @param : container Container 
    * 
    * @author LAHYANI Zakaria
    */
    DeclarationVector(const DeclarationVector& );


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

#endif // DECLARATIONVECTOR_H