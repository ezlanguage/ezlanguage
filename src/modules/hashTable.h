#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <vector>
#include <list>
#include <string>

/**
 * An hash table which can contains any type of element which contain the operator operator==
 * @author Johan Defaye
 */
template <typename T>
class hashTable : public std::vector<std::list<T> > {
   
public:
  
  /* * * * * * * * *
   * CONSTRUCTORS  *
   * * * * * * * * */
  
  /**
   * Default constructor
   * @author Johan Defaye
   */
  hashTable() {}
  
  /**
   * Constructor with parameters
   * Initialize the hash table with a given size
   * @param size : size of the hashTable
   * @author Johan Defaye
   */
  hashTable(unsigned int size) {this->resize(size);}
  
  /**
   * Copy constructor
   * Initialize a hash table with the elements of another hash table
   * @param h : another hash table
   * @author Johan Defaye
   */
  hashTable(const hashTable &h) {*this = h;}
  
  
  
  /* * * * * *
   * METHODS *
   * * * * * */
  
  
  /**
   * Give the hash code of an identifier passed as parameter
   * @param id_variable : identifier of the id_variable
   * @return unsigned int
   * @author Johan Defaye
   */
  unsigned int hash(const std::string & id_variable) const 
  {
    if (this->size() == 0) return 0;
    else {
      int sum = 0;
      int remainder = 0;
      
      for (unsigned int i = 0; i < id_variable.size(); ++i){
	sum += (int) id_variable[i]; 
      }
      
      remainder = sum % this->size();
      return remainder;
    }
  }
  
  /**
   * Add an element in the hash table with the specified identifier
   * Throw an error if the size of the hash table is null
   * @param element : an hash element
   * @param id : an identifier of the hash element to add
   * @author Johan Defaye
   */
  void addElement(const T & element, const std::string & id)
  {
    if (this->empty()) throw std::string("Error, can not add an element because the size of the hash table is null");
    else {
      int index = hash(id);
      this->at(index).push_front(element);
    }
  }
  
  /**
   * Remove an element from the hash table with the specified identifier
   * @param element : an hash element
   * @param id : an identifier of the hash element to remove
   * @author Johan Defaye
   */
  void removeElement(const T & element, const std::string & id)
  {
    int index = hash(id);
    typename std::list<T>::iterator it;
    it = this->at(index).begin();
    bool delete_done = false;
    while((!delete_done)&&(it != this->at(index).end())) {
      if (*it == element) {
	this->at(index).erase(it);
	delete_done = true;
      }
      if (!delete_done) ++it;
    }
    if (!delete_done) throw std::string("Error, the element to remove is not in the hash table");
  }
  
  /**
   * Remove an element from the hash table with the specified iterator and identifier
   * @param it : iterator of the element to remove
   * @param id : an identifier of the hash element to remove
   * @author Johan Defaye
   */
  void removeElement(typename std::list<T>::iterator & it, const std::string & id)
  {
    int index = hash(id);
    this->at(index).erase(it);
  }
  
  /**
   * Display the hash table
   * @author Johan Defaye
   */
  void print() const
  {
    for (unsigned int i = 0; i < this->size(); ++i) {
      std::cout << "Ligne " << i << " : " << std::endl;
      
      typename std::list<T>::const_iterator it;
      
      for (it = this->at(i).begin(); it != this->at(i).end(); ++it) {
	std::cout << *it << std::endl;
      }
      
      std::cout << std::endl;
    }
  }
  
};



#endif