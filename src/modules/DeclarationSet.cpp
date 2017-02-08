#include <iostream>
#include <string>
#include <vector>

#include "DeclarationSet.h"
using namespace std;

/**
 * @brief 
 * 
 * @details Use :
 * 				Scope set_name is of type
 * 				Scope set_name is of type size
 * 				Scope set_name is of type = {val_1, val_2, ..., val_n}
 * 
 * @author LAHYANI Zakaria
 */

DeclarationSet::DeclarationSet(Variable *v) : DeclarationContainer(v)
{

}


DeclarationSet::DeclarationSet(Variable *v, int s) : DeclarationContainer(v,s)
{

}


DeclarationSet::DeclarationSet(Variable *v, vector<string> vec) : DeclarationContainer(v,vec)
{

}


DeclarationSet::DeclarationSet(const DeclarationSet& ds) : DeclarationContainer(ds)
{

}


string DeclarationSet::preTranslate() const
{
	string str = "";
	if (!initializer.empty())
	{
		string temp =" {" ;
		
		for (unsigned int i = 0; i < initializer.size() - 1 ; ++i)
		{
			temp += initializer[i] + ", ";
		}

		temp += initializer.back() + " };";
		
		str += "string table[] = " + temp;
		str += "set<" + var->get_type() + "> " + var->get_id(); 
		str+= "(table, table+sizeof(table)/sizeof(table[0]);";

	}
	else if(size != 0) 
	{
		str += "set<" + var->get_type() + ">" + var->get_id() ;
		for (int i = 0; i < size; ++i)
		{
			str += var->get_id() + ".insert(\"\");";
		}
		return str;
	}
	else
	{
		str += "set<" + var->get_type() + ">" + var->get_id() + ";" ;
	}

	return str;


}