#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

#include "Node.h"
#include "DeclarationVector.h"

/**
 * @class Vector
 * @brief Class representing vector's data structer methods
 * 
 * @author LAHYANI Zakaria
 */

class Vector : public Node
{
  public:

    /**
    * Enum type to help in the translation
    *
    * @author LAHYANI Zakaria
    */
    enum Method
    {
       SIZE,
       CLEAR,
       PRINT,
       IS_EMPTY,
       FILL,
       RANDOMIZE,
       MAX,
       MAX_WITH_ARGS,
       MIN,
       MIN_WITH_ARGS,
       SORT,
       SORT_WITH_ARGS,
       PUT_FIRST,
       PUT_LAST,
       REMOVE_FIRST,
       REMOVE_LAST,
       SUM,
       SUM_WITH_ARGS,
       AVERAGE,
       AVERAGE_WITH_ARGS,
       COUNT,
       COUNT_WITH_ARGS,
       REMOVE,
       FIND,
       FIND_WITH_ARGS,
       STORE,
       RESTORE,
       FIRST,
       LAST,
       REMOVE_AT,
       PUT_AT
    };

	Method method;



	/* * * * * * * * *
    * CONSTRUCTORS  *
    * * * * * * * * */
		

    /**
    * Minimal constructor Takes the container 
    * 
    * @param : variable 
    *
    * @author LAHYANI Zakaria
    */

    Vector(DeclarationVector *);


    /**
    * constructor Takes the container and 1 parameters
    * NB : To use only in case of a function that takes 1 arguments (like store(filename) ) 
    * 
    * @param : vector 
    * @param : the value of the parameter 
    *
    * @author LAHYANI Zakaria
    */
    Vector(DeclarationVector *, std::string);


    /**
    * constructor Takes the container and 2 parameters
    * NB : To use only in case of a function that takes 2 arguments (like randomize(min, max) ) 
    * 
    * @param : vector 
    * @param : the value of the first parameter 
    * @param : the value of the second parameter 
    *
    * @author LAHYANI Zakaria
    */
    Vector(DeclarationVector *, std::string, std::string);


    /**
    * Destructor
    * @author LAHYANI Zakaria
    */
    virtual ~Vector();




    /* * * * * * * * * * * * * *
	* ACCESSORS  AND MUTATORS  *
	* * * * * * * * * * * * *  */

	
	/**
	* getter of vector
	* @author LAHYANI Zakaria
	*/
    DeclarationVector * get_vector() const;


    /**
    * getter of the first params
    * @author LAHYANI Zakaria
    */
    std::string get_param1() const;


    /**
    * getter of the second params
    * @author LAHYANI Zakaria
    */
    std::string get_param2() const;


    /**
    * setter of size
    * @param v : the Variable of this array
    *
    * @author LAHYANI Zakaria
    */
    void set_vector(DeclarationVector  *);


    /**
    * setter of the first params
    * @author LAHYANI Zakaria
    */
    void set_param1(std::string);


    /**
    * setter of the second params
    * @author LAHYANI Zakaria
    */
    void set_param2(std::string);




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


  private:
    DeclarationVector *declaration;
    std::string param1;
    std::string param2;
};

#endif // VECTOR_H