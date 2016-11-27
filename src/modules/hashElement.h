#ifndef HASHELEMENT_H
#define HASHELEMENT_H

#include <iostream>
#include <string>


/**
 * An element to be used in a hash table
 * @author Johan defaye
 */
class hashElement {

protected:
  std::string _id;
  
public:
  
  
  
  /* * * * * * * * *
   * CONSTRUCTORS  *
   * * * * * * * * */
  
  
  /**
   * Default constructor
   * Set the identifier by the empty string
   * @author Johan Defaye
   */
  hashElement();
  
  /**
   * Constructor with parameters
   * Set the identifier by the string passed as parameter
   * @param s : identifier of the hash element
   * @author Johan Defaye
   */
  hashElement(const std::string & s);
  
  /**
   * Copy constructor
   * @param e : another hash element
   * @author Johan Defaye
   */
  hashElement(const hashElement & e);
  
  
  
  /* * * * * * * * * * * * *
   * ACCESSOR AND MUTATOR  *
   * * * * * * * * * * * * */
  
  
  /**
   * Give the identifier
   * @return string
   * @author Johan Defaye
   */
  std::string get_id() const {return _id;}
  
  /**
   * Set the identifier
   * @param s : an identifier
   * @author Johan Defaye
   */
  void set_id(const std::string & s) {_id = s;}
  
  
  
  /* * * * * * * * * * * * *
   * OPERATOR OVERLOADING  *
   * * * * * * * * * * * * */
  
  
  /**
   * Return true if the hash element given as parameter has the same identifier and false otherwise
   * @param e : another hash element
   * @return boolean
   * @author Johan Defaye
   */
  bool is_equal(const hashElement & e) const;
  
  /**
   * Print the hash element 
   * @param flux : flux where the hash element will be print 
   * @author Johan Defaye
   */
  void print(std::ostream & flux) const
  {
    flux << "id = " << _id;
  }
  
  
};


/**
 * Check if two hash elements are the same
 * @param e1 : first hash element
 * @param e2 : second hash element
 * @return boolean
 * @author Johan Defaye
 */
bool operator==(hashElement const & e1, hashElement const & e2);

bool operator!=(hashElement const & e1, hashElement const & e2);


/** 
 * Display an hash element
 * @param flux : flux where the hash element will be print 
 * @param element : the element to display
 * @return std::ostream&
 * @author Johan Defaye
 */
template <typename T>
std::ostream& operator<<(std::ostream &flux, const hashElement & element) {
  element.print(flux);
  return flux;
}

#endif