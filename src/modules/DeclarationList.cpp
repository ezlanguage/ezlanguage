#include <iostream>
#include <string>
#include <vector>

#include "DeclarationList.h"
using namespace std;

/**
 * @brief 
 * 
 * @details Use :
 * 				Scope list_name is of type
 * 				Scope list_name is of type size
 * 				Scope list_name is of type = {val_1, val_2, ..., val_n}
 * 
 * @author LAHYANI Zakaria
 */


DeclarationList::DeclarationList(Variable *v) : DeclarationContainer(v)
{

}


DeclarationList::DeclarationList(Variable *v, int s) : DeclarationContainer(v,s)
{

}


DeclarationList::DeclarationList(Variable *v, vector<string> vec) : DeclarationContainer(v,vec)
{

}


DeclarationList::DeclarationList(const DeclarationList& ds) : DeclarationContainer(ds)
{

}


string DeclarationList::preTranslate() const
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
		str += "list<" + var->get_type() + "> " + var->get_id(); 
		str+= "(table, table+sizeof(table)/sizeof(table[0]);";

	}
	else if(size != 0) 
	{
		str += "list<" + var->get_type() + ">" + var->get_id() + " (" + std::to_string(size) + " );" ;;
	}
	else
	{
		str += "list<" + var->get_type() + ">" + var->get_id() + ";" ;
	}

	return str;


}