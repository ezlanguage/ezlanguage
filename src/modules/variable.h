#ifndef VARIABLE_H
#define VARIABLE_H

#include "hashElement.h"


class variable : public hashElement {
private:
  
  std::string _type;
  unsigned int _scope;
  bool _const;
  
public:
  
  
  
  /* * * * * * * * *
   * CONSTRUCTORS  *
   * * * * * * * * */
  
  
  /**
   * Default constructor
   * Set the identifier and the type of the variable by the empty string
   * @author Johan Defaye
   */
  variable();
  
  /**
   * Constructor with parameters
   * Set the identifier and the type by those passed as parameters
   * @param i : id of the variable
   * @param t : type of the variable
   * @param s : scope of the variable
   * @param c : if the variable is const
   * @author Johan Defaye
   */
  variable(std::string i, std::string t, unsigned int s, bool c = false);
  
  /**
   * Copy constructor
   * @param v : another variable
   * @author Johan Defaye
   */
  variable(const variable & v);
  
  
  
  /* * * * * * * * * * * * * *
   * ACCESSORS  AND MUTATORS *
   * * * * * * * * * * * * * */
  
  
  /**
   * Give the type
   * @return string
   * @author Johan Defaye
   */
  std::string get_type() const {return _type;}
  
  /**
   * Set the type
   * @param s : an identifier
   * @author Johan Defaye
   */
  void set_type(const std::string & t) {_type = t;}
  
  /**
   * Give the type
   * @return unsigned int
   * @author Johan Defaye
   */
  unsigned int get_scope() const {return _scope;}
  
  /**
   * Set the scope
   * @param s : a scope
   * @author Johan Defaye
   */
  void set_scope(unsigned int s) {_scope = s;}
  
  /**
   * Return true if the variable is const
   * @return bool
   * @author Johan Defaye
   */
   bool is_const() const { return _const;}
   
  /**
   * Set the _const attribute of the variable
   * @param c : const or not
   * @author Johan Defaye
   */
   void set_const(bool c) { _const = c;}
  
  
  /* * * * * * * * * * * * *
   * OPERATOR OVERLOADING  *
   * * * * * * * * * * * * */

  /**
   * Return true if the variable given as parameter has the same identifier and the same type
   * @param v : another variable
   * @return boolean
   * @author Johan Defaye
   */
  bool is_equal(const variable & v) const;
  
  /**
   * Print the variable 
   * @param flux : flux where the variable will be print 
   * @author Johan Defaye
   */
  void print(std::ostream & flux) const;
  
};


/**
 * Check if two variables are the same
 * @param v1 : first variable
 * @param v2 : second variable
 * @return boolean
 * @author Johan Defaye
 */
bool operator==(const variable & v1, const variable & v2);

bool operator!=(const variable & v1, const variable & v2);

/** 
 * Display a variable
 * @param flux : flux where the variable will be print 
 * @param element : the variable to display
 * @return std::ostream&
 * @author Johan Defaye
 */
std::ostream& operator<<(std::ostream &flux, const variable & v);




#endif