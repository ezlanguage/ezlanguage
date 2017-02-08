#include <iostream>
#include <string>
#include <vector>

#include "DeclarationContainer.h"

using namespace std;

/**
 * @brief 
 * 
 * @details Use :
 * 				Scope container_name is of type
 * 				Scope container_name is of type size
 * 				Scope container_name is of type = {val_1, val_2, ..., val_n}
 * 
 * @author LAHYANI Zakaria
 */



/* * * * * * * * *
* CONSTRUCTORS   *
* * * * * * * * */



DeclarationContainer::DeclarationContainer(Variable *v) : var(v), size(0)
{
    //ctor
}


DeclarationContainer::DeclarationContainer(Variable *v,  int s) : var(v), size(s)
{
    //ctor
}


DeclarationContainer::DeclarationContainer(Variable *v, vector<string> il) : var(v), size(initializer.size()), initializer(il)
{
    //ctor
}


DeclarationContainer::DeclarationContainer(const DeclarationContainer& vec) : var(vec.var), size(vec.size), initializer(vec.initializer)
{
    //ctor
}


DeclarationContainer::~DeclarationContainer()
{
    //dtor
}



/* * * * * * * * * * * * * *
* ACCESSORS  AND MUTATORS *
* * * * * * * * * * * * * */



Variable * DeclarationContainer::get_variable() const
{
	return var;
}


string DeclarationContainer::get_type() const
{
	return var->get_type();
}


vector<string> DeclarationContainer::get_initializer() const
{
	return initializer;
}


int DeclarationContainer::get_size() const
{
	return size;
}


void DeclarationContainer::container_variable(Variable *v)
{
	var = v;
}


void DeclarationContainer::container_initializer(vector<string> t)
{
	initializer = t;
}


void DeclarationContainer::container_size(int s)
{
	size = s;
}


