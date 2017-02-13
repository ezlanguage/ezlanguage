#ifndef DECLARATIONMAP_H
#define DECLARATIONMAP_H


#include <vector>
#include <iostream>

#include "Node.h"
#include "../hash_table/Variable.h"

/**
 * @class DeclarationMap
 * @brief Class representing list's data structer declarations
 * 
 * @author LAHYANI Zakaria
 */

class DeclarationMap : public Node
{
   public:


    /* * * * * * * * *
    * CONSTRUCTORS  *
    * * * * * * * * */
        

    /**
    * Minimal constructor Takes the container type & key, and name (its name)
    * 
    * @param : variable 
    * @param : key type 
    * @param : values type 
    *
    * @author LAHYANI Zakaria
    */
    DeclarationMap(Variable *,std::string, std::string) ;

    /**
    * Minimal constructor Takes the container type & key, and name and initial values
    * 
    * @param : variable 
    * @param : key's type 
    * @param : value's type 
    * @param : vector to store initial keys 
    * @param : vector to store initial values 
    *
    * @author LAHYANI Zakaria
    */
    DeclarationMap(Variable *v, std::string, std::string, std::vector<std::string>, std::vector<std::string> );
    /**
    * Copy COnstructor 
    *  
    * @param : container Container 
    * 
    * @author LAHYANI Zakaria
    */
    DeclarationMap(const DeclarationMap& );

    /**
    * Destructor
    * @author LAHYANI Zakaria
    */
    virtual ~DeclarationMap();



    /* * * * * * * * * * * * * *
    * ACCESSORS  AND MUTATORS *
    * * * * * * * * * * * * * */

    /**
    * getter of Variable
    *
    * @author LAHYANI Zakaria
    */
    Variable * get_variable() const;

    /**
    * get keys type
    *
    * @author LAHYANI Zakaria
    */
    std::string get_key_type() const;


    /**
    * get value type
    *
    * @author LAHYANI Zakaria
    */
    std::string get_value_type() const;


    /**
    * get keys
    *
    * @author LAHYANI Zakaria
    */
    std::vector<std::string> get_key() const;
    
    /**
    * get values
    *
    * @author LAHYANI Zakaria
    */
    std::vector<std::string> get_value() const;

    /**
    * containerter of variable
    *
    * @param v : the Variable of the container
    * @author LAHYANI Zakaria
    */
    void set_variable(Variable *);



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
    Variable *var;
    std::string key_type;
    std::string value_type;
    std::vector<std::string> keys;
    std::vector<std::string> values;
};

#endif // DECLARATIONMAP_H
