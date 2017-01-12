#ifndef SCOPEHASHTABLE_H
#define SCOPEHASHTABLE_H

#include <iostream>
#include <stack>
#include <list>
#include <string>

#include "hashTable.h"
#include "variable.h"

/**
 * Hash table which can only contains variable
 * @author Johan Defaye
 */
class scopeHashTable : public hashTable<variable> {
  
  
  private:
    std::stack<std::list< std::list<variable>::iterator > > _scopeStack; // Used to improve the suppression of all the element of the same scoop
    unsigned int _currentScope; 
  
  
  public:
    
    
    
    /* * * * * * * * *
     * CONSTRUCTORS  *
     * * * * * * * * */
    
    
    /**
     * Default constructor 
     * Construct an empty hash table with a empty scope stack
     * Initialize the current scope to 0
     * @author Johan Defaye
     */
    scopeHashTable();
    
    /**
     * Constructor with parameter
     * @param size : size of the hash table
     * @author Johan Defaye
     */
    scopeHashTable(unsigned int size);
    
    /**
     * Copy constructor
     * @param table : another scope hash table
     * @author Johan Defaye
     */
    scopeHashTable(const scopeHashTable & table);
    
    
    
    /* * * * * * *
     * ACCESSOR  *
     * * * * * * */
    
    
    /**
     * Give the scope stack of the hash table
     * @return stack<list< variable::iterator > >
     * @author Johan Defaye
     */
    std::stack<std::list< std::list<variable>::iterator > > get_scopeStack() const {return _scopeStack;}
    
    
    /**
     * Give the current scope of the hash table
     * @return unsigned int : current scope
     * @author Johan Defaye
     */
    unsigned int get_currentScope() const {return _currentScope;}
    
    
    /* * * * * *
     * METHODS *
     * * * * * */
    
    
    /**
     * Incremente the current scope by one unit
     * @author Johan Defaye
     */
    void incScope();
    
    /**
     * Remove all the variable from the highest scope in the hash table
     * Decremente the current scope by one unit
     * @exception : Return a string as exception if the current scope is equal to 0 before decremente
     * @author Johan Defaye
     */
    void decScope();
    
    /**
     * Add a variable in the hash table 
     * @param v : variable to add
     * @exception : Return a string as exception if the hash table is empty
     * @author Johan Defaye
     */
     void addElement(variable & v);
     
    /**
     * Remove a variable from the hash table
     * @param v : variable to remove
     * @exception : Return a string as exception if the variable to be removed has too small scope
     * @exception : Return a string as exception if the variable to be removed is not in the hash table
     * @author Johan Defaye
     */
     //void removeElement(const variable & v);
      
      
    /**
     * Return the type of the variable with the specified identifier
     * Return the empty string if the type is not known
     * @param id : identifier of the variable
     * @exception : Return an exception if not found
     * @return string
     * @author Johan Defaye
     */
      std::string get_type(const std::string & id) const;
      
      
     /**
      * Test if an element is in the hash table
      * @param id : identifier
      * @return boolean
      * @author Johan Defaye
      */
      bool contains(const std::string & id) const;
    
  
};

#endif