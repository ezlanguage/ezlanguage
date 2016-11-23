//@author : GINISTY Valentin
// ie -> add by Ismail ELFAQIR
#include "Array.h"
#include <iostream>

using namespace std;

Array::Array(int begin_it, int end_it): begin_iterator(begin_it), end_iterator(end_it) {
    name= "Array";
}

// ie -> form 0 to end_iterator
Array::Array(int end_it):begin_iterator(0),end_iterator(end_it) {
}

// ie -> if table begin by 5 for example the right index will be index-5 for c++
int Array::get_index(int index) {
	return index-start_iterator;
}

// ie -> geter of begin_iterator
int Array::get_begin_iterator() const {
	return start_index;
}

// ie -> geter of end_iterator
int Array::get_end_iterator() const {
	return end_index;
}

string Array::translate() {
	// ie -> here i suppose that the left_son contains the type and identifier of the table 
	// ie-> like left_son->translate() = int tabel 
	// ie-> the result will be if begin_iterator!=0 : int tabel[end_iterator-begin_iterator+1] in c++
	if(begin_iterator!=0) return this->left_son->translate() +"["+(end_iterator-begin_iterator+1)+"]";
	// ie-> the result will be if begin_iterator==0 : int tabel[end_iterator] in c++	
	else return this->left_son->traduire() +"["+end_iterator+"]";
}
