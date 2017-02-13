#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

#include "Node.h"
#include "ArrayDeclaration.h"

/**
 * @class Array
 * @brief Class representing array's data structer methods
 * 
 * @author LAHYANI Zakaria
 */


class Array : public Node
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
       SUM,
       SUM_WITH_ARGS,
       COUNT,
       COUNT_WITH_ARGS,
       REMOVE
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

    Array(ArrayDeclaration *);


    /**
    * constructor Takes the container and 1 parameters
    * NB : To use only in case of a function that takes 1 arguments (like store(filename) ) 
    * 
    * @param : array 
    * @param : the value of the parameter 
    *
    * @author LAHYANI Zakaria
    */
    Array(ArrayDeclaration *, std::string);


    /**
    * constructor Takes the container and 2 parameters
    * NB : To use only in case of a function that takes 2 arguments (like randomize(min, max) ) 
    * 
    * @param : array 
    * @param : the value of the first parameter 
    * @param : the value of the second parameter 
    *
    * @author LAHYANI Zakaria
    */
    Array(ArrayDeclaration *, std::string, std::string);


    /**
    * Destructor
    * @author LAHYANI Zakaria
    */
    virtual ~Array();




    /* * * * * * * * * * * * * *
	* ACCESSORS  AND MUTATORS  *
	* * * * * * * * * * * * *  */

	
	/**
	* getter of array
	* @author LAHYANI Zakaria
	*/
    ArrayDeclaration * get_array() const;


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
    void set_array(ArrayDeclaration  *);


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
    ArrayDeclaration *declaration;
    std::string param1;
    std::string param2;
};

#endif // ARRAY_H