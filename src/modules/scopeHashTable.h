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
  
  
  public:
    
    
    
    /* * * * * * * * *
     * CONSTRUCTORS  *
     * * * * * * * * */
    
    
    /**
     * Default constructor 
     * Construct an empty hash table with a empty scope stack
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
    
    
    
    /* * * * * *
     * METHODS *
     * * * * * */
    
    
    /**
     * Add a variable in the hash table 
     * @param v : variable to add
     * @exception : Return a string as exception if the variable to be added has too small scope
     * @exception : Return a string as exception if the hash table is empty
     * @author Johan Defaye
     */
     void addElement(const variable & v);
     
    /**
     * Remove a variable from the hash table
     * @param v : variable to remove
     * @exception : Return a string as exception if the variable to be removed has too small scope
     * @exception : Return a string as exception if the variable to be removed is not in the hash table
     * @author Johan Defaye
     */
     void removeElement(const variable & v);
     
    /**
     * Remove all the variable from the highest scope in the hash table
     * @exception : Return a string as exception if the hash table is empty
     * @author Johan Defaye
     */
     void removeHighestScope();
      
      
    /**
     * Return the type of the variable with the specified identifier and scope 
     * Return the empty string if not known
     * @param id : identifier of the variable
     * @param s : scope of the variable
     * @return string
     * @exception : Return a string as exception if not found
     * @author Johan Defaye
     */
      std::string get_type(const std::string & id, unsigned int s) const;
    
  
};

#endif
