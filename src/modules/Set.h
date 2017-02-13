#ifndef SET_H
#define SET_H

#include <iostream>

#include "Node.h"
#include "DeclarationSet.h"

/**
 * @class Set
 * @brief Class representing Set's data structer methods
 * 
 * @author LAHYANI Zakaria
 */

class Set  : public Node
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
       INSERT,
       MAX,
       MAX_WITH_ARGS,
       MIN,
       MIN_WITH_ARGS,
       SUM,
       SUM_WITH_ARGS,
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

    Set(DeclarationSet *);


    /**
    * constructor Takes the container and 1 parameters
    * NB : To use only in case of a function that takes 1 arguments (like store(filename) ) 
    * 
    * @param : Set 
    * @param : the value of the parameter 
    *
    * @author LAHYANI Zakaria
    */
    Set(DeclarationSet *, std::string);



    /**
    * Destructor
    * @author LAHYANI Zakaria
    */
    virtual ~Set();




    /* * * * * * * * * * * * * *
	* ACCESSORS  AND MUTATORS  *
	* * * * * * * * * * * * *  */

	
	/**
	* getter of Set
	* @author LAHYANI Zakaria
	*/
    DeclarationSet * get_set() const;


    /**
    * getter of the first params
    * @author LAHYANI Zakaria
    */
    std::string get_param1() const;



    /**
    * setter of size
    * @param v : the Variable of this array
    *
    * @author LAHYANI Zakaria
    */
    void set_set(DeclarationSet  *);


    /**
    * setter of the first params
    * @author LAHYANI Zakaria
    */
    void set_param1(std::string);



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
    DeclarationSet *declaration;
    std::string param1;

};

#endif // SET_H