#ifndef ARRAYDECLARATION_H
#define ARRAYDECLARATION_H

#include <string>
#include <vector>

#include "Node.h"
#include "../hash_table/Variable.h"
#include "DeclarationContainer.h"

/**
 * @brief : class representing the array declaration
 *
 * @author : Ismail ELFAQIR, LAHYANI Zakaria
 * 
 */
class ArrayDeclaration : public Node, public DeclarationContainer
{
private:
    int lower_bound;
    int upper_bound;

public:

    /* * * * * * * * *
    * CONSTRUCTORS  *
    * * * * * * * * */

    /**
    * Constructor with parameters
    * Set the Variable the the upper bound and the lower bound of tehe array by the parameters passed to the constructor
    *
    * @param  : pointer to the Variable
    * @param  : the upper bound
    * @param  : the lower bound
    *
    * @author Lahyani Zakaria 
    */
    ArrayDeclaration(Variable *,int, int);


    /**
    * Constructor with parameters
    * 
    * @param : pointer to the Variable
    * @param : array size
    * @param : initializer list
    *
    * @author LAHYANI Zakaria 
    */
    ArrayDeclaration(Variable *v, int, std::vector<std::string>);


    /**
    * Constructor with parameters
    * Set the Variable and the size of array by the parameters passed to the constructor
    * @param v : pointer to the Variable
    * @param s : size of array
    * @author Ismail ELFAQIR 
    */
    ArrayDeclaration(Variable *v, int s);


    /**
    * Copy constructor
    * @param cpy : the array that we want to cpy to the actual array
    * @author Ismail ELFAQIR
    */
    ArrayDeclaration(const ArrayDeclaration & cpy);

    /**
    * Destructor
    * @author Ismail ELFAQIR
    */
    virtual ~ArrayDeclaration();



    /* * * * * * * * * * * * * *
    * ACCESSORS  AND MUTATORS *
    * * * * * * * * * * * * * */


    /**
    * lower bound's getter
    *
    * @author : Lahyani Zakaria
    */

    int get_lower_bound() const;


    /**
    * upper bound's getter
    *
    * @author : Lahyani Zakaria
    */
    int get_upper_bound() const;


    /**
    * upper bound's setter 
    * @param v : the upper bound value
    *
    * @author Lahyani Zakaria
    */
    void set_lower_bound(int);


    /**
    * lower bound's setter 
    * @param s : lower bound value 
    * 
    * @author Lahyani Zakaria
    */
    void set_upper_bound(int);




    /* * * * * * * *
    * Translation  *
    * * * * * * * **/



    /**
     * @brief Translate the begining part of the ArrayDeclaration
     * @return a string containing the C++ code of the node
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string preTranslate() const;


};

#endif
