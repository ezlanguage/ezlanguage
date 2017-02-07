#ifndef ARRAYACCESS_H
#define ARRAYACCESS_H

#include <string>
#include "Node.h"
#include "ArrayDeclaration.h"

/**
 * @class AccessArray
 * @brief meant to translate an access to array by index 
 * 
 * example of translation my_array[5] -> here index=5  
 * @author Ismail ELFAQIR
 */
class ArrayAccess :
public Node {
protected:
    ArrayDeclaration * array;
    int index;
public:

    /* * * * * * * * *
    * CONSTRUCTORS  *
    * * * * * * * * */


    /**
    * Default constructor
    * Set array to NULL and index to 0
    * @author Ismail ELFAQIR
    */
    ArrayAccess();

    /**
    * Constructor with parameters
    * Set the array and the access index of array by the parameters passed to the constructor
    * @param a : pointer to the ArrayDeclaration
    * @param i : index
    * @author Ismail ELFAQIR
    */
    ArrayAccess(ArrayDeclaration *a, int i );

    /**
    * Copy constructor
    * @param cpy : the array accessor that we want to cpy to the actual array accessor
    * @author Ismail ELFAQIR
    */
    ArrayAccess(const ArrayAccess & cpy);

    /**
    * Destructor
    * @author Ismail ELFAQIR
    */
    virtual ~ArrayAccess();

    /* * * * * * * * * * * * * *
    * ACCESSORS  AND MUTATORS *
    * * * * * * * * * * * * * */

    /**
    * getter of array
    * @author Ismail ELFAQIR
    */
    ArrayDeclaration * get_array() const;

    /**
    * getter of index
    * @author Ismail ELFAQIR
    */
    int get_index() const;

    /**
    * setter of array
    * @param a : pointer to the ArrayDeclaration
    * @author Ismail ELFAQIR
    */
    void set_array(ArrayDeclaration *a);

    /**
    * setter of index
    * @param i : index
    * @author Ismail ELFAQIR
    */
    void set_index(int i);

    /* * * * * * * *
    * Translation  *
    * * * * * * * **/

    /**
     * @brief Translate the begining part of the ArrayAccess
     * @return a string containing the C++ code of the ArrayAccess
     *
     * All subclasses, must reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string preTranslate() const;
};

#endif
