#ifndef MAP_H
#define MAP_H

#include <iostream>

#include "Node.h"
#include "DeclarationMap.h"


/**
 * @class Map
 * @brief Class representing map's data structer methods
 * 
 * @author LAHYANI Zakaria
 */


class Map
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
       EXIST,
       FIND,
       REMOVE
    };

	Method method;



	/* * * * * * * * *
    * CONSTRUCTORS  *
    * * * * * * * * */
		

    /**
    * Minimal constructor Takes the container 
    * 
    * @param : map 
    *
    * @author LAHYANI Zakaria
    */

    Map(DeclarationMap *);


    /**
    * constructor Takes the container and 2 parameters
    * NB : To use only in case of a function that takes 2 arguments (like randomize(min, max) ) 
    * 
    * @param : Map 
    * @param : key 
    * @param : value 
    *
    * @author LAHYANI Zakaria
    */
    Map(DeclarationMap *, std::string, std::string);


    /**
    * Destructor
    * @author LAHYANI Zakaria
    */
    virtual ~Map();




    /* * * * * * * * * * * * * *
	* ACCESSORS  AND MUTATORS  *
	* * * * * * * * * * * * *  */


	
	/**
	* getter of Map
	* @author LAHYANI Zakaria
	*/
    DeclarationMap * get_map() const;


    /**
    * getter of the first params
    * @author LAHYANI Zakaria
    */
    std::string get_key() const;


    /**
    * getter of the second params
    * @author LAHYANI Zakaria
    */
    std::string get_value() const;


    /**
    * setter of size
    * @param v : the Variable of this array
    *
    * @author LAHYANI Zakaria
    */
    void set_map(DeclarationMap  *);


    /**
    * setter of the first params
    * @author LAHYANI Zakaria
    */
    void set_key(std::string);


    /**
    * setter of the second params
    * @author LAHYANI Zakaria
    */
    void set_value(std::string);


    /**
    * return the size of the map
    * @author LAHYANI Zakaria
    */
    int get_size();



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
    DeclarationMap *declaration;
    std::string key;
    std::string value;
};

#endif // MAP_H