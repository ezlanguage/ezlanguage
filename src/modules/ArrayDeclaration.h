//@author : Ismail ELFAQIR
#ifndef ARRAYDECLARATION_H
#define ARRAYDECLARATION_H

#include <string>
#include "Node.h"
#include "variable.h"

class ArrayDeclaration :
        public Node {
	protected:
		variable *var;
		int size;
	public:
	 
		/* * * * * * * * *
		* CONSTRUCTORS  *
		* * * * * * * * */
	
	
		/**
		* Default constructor
		* Set Variable to NULL and size to 0
		* @author Ismail ELFAQIR
		*/
		ArrayDeclaration();
	
		/**
		* Constructor with parameters
		* Set the variable and the size of array by the parameters passed to the constructor
		* @param v : pointer to the variable
		* @param s : size of array
		* @author Ismail ELFAQIR
		*/
		ArrayDeclaration(variable *v, int s ); 
	
		/**
		* Constructor with parameters
		* Set only the variable without specify the size of array 
		* @param v : pointer to the variable
		* @author Ismail ELFAQIR
		*/
		ArrayDeclaration(variable *v);
	
		/**
		* Copy constructor
		* @param cpy : the array that we want to cpy to the actual array
		* @author Ismail ELFAQIR
		*/
		ArrayDeclaration(const ArrayDeclaration & cpy);
	
		/**
		* Destructor
		* @author Ismail ELFAQIR
		*/
		virtual ~ArrayDeclaration();
	
		/* * * * * * * * * * * * * *
		* ACCESSORS  AND MUTATORS *
		* * * * * * * * * * * * * */
	
		/**
		* getter of variable
		* @author Ismail ELFAQIR
		*/
		variable * get_variable() const;
	
		/**
		* getter of size
		* @author Ismail ELFAQIR
		*/
		int get_size() const;
	
		/**
		* setter of size
		* @param v : the variable of this array
		* @author Ismail ELFAQIR
		*/
		void set_variable(variable *v);
	
		/**
		* setter of size
		* @param s : value of the size 
		* @author Ismail ELFAQIR
		*/
		void set_size(int s);
	
		/* * * * * * * *
		* Translation  *
		* * * * * * * **/
	
		std::string translate();
};

#endif
