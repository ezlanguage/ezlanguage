//@author : GINISTY Valentin
// ie -> add by Ismail ELFAQIR
#ifndef ARRAY_H
#define ARRAY_H

#include <string>
#include "Node.h"

class Array :
        public Node {
protected:
	
	// ie -> iterateur en français to iterator in english 
    int begin_iterator; 
    int end_iterator;

public:
	Array(int end_it); // ie -> array can have just an end_it like c++
    Array(int begin_it, int end_it);
	int get_index(int index); // ie -> get index of table 
	// ie -> geters 
	int get_begin_iterator() const;
	int get_end_iterator() const;
    std::string translate();
};

#endif
