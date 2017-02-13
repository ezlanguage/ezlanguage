#include <iostream>
#include <string>

#include "ArrayDeclaration.h"

using namespace std;

/**
 * @brief 
 * 
 * @details Use :
 * 				Scope array_name is array[lower_bound..upper_bound] of type
 * 				Scope array_name is array[size] of type 
 * 				Scope vector_name is array[size] of type = {val_1, val_2, ..., val_n}
 * 
 * @author  LAHYANI Zakaria - Ismail ELFAQIR
 */



// /* * * * * * * * *
// * CONSTRUCTORS   *
// * * * * * * * * */




ArrayDeclaration::ArrayDeclaration(Variable *v, int s, vector<string> il) : DeclarationContainer(v, s, il)
{
	name= "Array Declaration with initializer list";
}


ArrayDeclaration::ArrayDeclaration(Variable *v, int lb, int ub) : DeclarationContainer(v, ub - lb), lower_bound(lb), upper_bound(ub)
{
	name= "Array Declaration with size";
}


ArrayDeclaration::ArrayDeclaration(Variable *v, int s) : DeclarationContainer(v,s)
{
	name= "Array Declaration with size";
}


ArrayDeclaration::ArrayDeclaration(const ArrayDeclaration & cpy):DeclarationContainer(cpy)
{
	name= "Array Declaration - Copy Constructor";
}


ArrayDeclaration::~ArrayDeclaration()
{
	// dtor
}



/* * * * * * * * * * * * * *
* ACCESSORS  AND MUTATORS *
* * * * * * * * * * * * * */



int ArrayDeclaration::get_lower_bound() const 
{
	return lower_bound;
}


int ArrayDeclaration::get_upper_bound() const 
{
	return upper_bound;
}


void ArrayDeclaration::set_lower_bound(int lb)
{
	lower_bound = lb;
}


void ArrayDeclaration::set_upper_bound(int s)
{
	upper_bound = s;
}



/* * * * * * * *
* Translation  *
* * * * * * * **/



string ArrayDeclaration::preTranslate() const
{
   
    string str = "";
	if (!initializer.empty())
	{
		str += "std::array<" + var->get_type() + "," + std::to_string(size) + ">" + var->get_id() + " = {" ;
		
		for (unsigned int i = 0; i < initializer.size() - 1 ; ++i)
		{
			str += initializer[i] + ", ";
		}

		str += initializer.back() + " };";
	}
	else 
	{
		str += "std::array<" + var->get_type() + "," + std::to_string(size) + ">" + var->get_id()  + " ;" ;

	}

	return str;
}

