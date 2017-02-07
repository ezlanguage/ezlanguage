#include <iostream>
#include <string>
#include <vector>

#include "DeclarationVector.h"

using namespace std;

/**
 * @brief 
 * 
 * @details Use :
 * 				Scope vector_name is of type
 * 				Scope vector_name is of type size
 * 				Scope vector_name is of type = {val_1, val_2, ..., val_n}
 * 
 * @author LAHYANI Zakaria
 */



// /* * * * * * * * *
// * CONSTRUCTORS   *
// * * * * * * * * */



DeclarationVector::DeclarationVector(Variable *v) : DeclarationContainer(v)
{
    //ctor
}


DeclarationVector::DeclarationVector(Variable *v,  int s) : DeclarationContainer(v,s)
{
    //ctor
}


DeclarationVector::DeclarationVector(Variable *v, vector<string> il) : DeclarationContainer(v,il)
{
    //ctor
}


DeclarationVector::DeclarationVector(const DeclarationVector& vec) : DeclarationContainer(vec)
{
    //ctor
}



/* * * * * * * *
* Translation  *
* * * * * * * **/



string DeclarationVector::preTranslate() const
{
	string str = "";
	if (!initializer.empty())
	{
		str += "vector<" + var->get_type() + ">" + var->get_id() + " = {" ;
		
		for (unsigned int i = 0; i < initializer.size() - 1 ; ++i)
		{
			str += initializer[i] + ", ";
		}

		str += initializer.back() + " };";
	}
	else if(size != 0) 
	{
		str += "vector<" + var->get_type() + ">" + var->get_id() + " (" + std::to_string(size) + " );" ;

	}
	else
	{
		str += "vector<" + var->get_type() + ">" + var->get_id() + ";" ;
	}

	return str;

}