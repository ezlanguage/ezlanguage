
#include <iostream>
#include <string>
#include <vector>

#include "DeclarationMap.h"

using namespace std;

/**
 * @brief 
 * 
 * @details Use :
 * 				Scope map_name is of <type,type>
 * 				Scope map_name is of <type,type> = {<key1, val1>, ...}
 * 
 * @author LAHYANI Zakaria
 */

DeclarationMap::DeclarationMap(Variable *v, string _key, string _value) : var(v), key_type(_key), value_type(_value)
{
    //ctor
}

DeclarationMap::DeclarationMap(Variable *v, string _k, string _val, vector<string> _key, vector<string> _value) : var(v), key_type(_k), value_type(_val), keys(_key), values(_value)
{
    //ctor
}

DeclarationMap::DeclarationMap(const DeclarationMap& dm) : var(dm.var), key_type(dm.key_type), value_type(dm.value_type), keys(dm.keys), values(dm.values)
{

}


DeclarationMap::~DeclarationMap()
{
    //dtor
}




/* * * * * * * * * * * * * *
* ACCESSORS  AND MUTATORS *
* * * * * * * * * * * * * */



Variable * DeclarationMap::get_variable() const
{
	return var;
}


vector<string> DeclarationMap::get_key() const
{
	return keys;
}


string DeclarationMap::get_key_type() const
{
	return key_type;
}


string DeclarationMap::get_value_type() const
{
	return value_type;
}


vector<string> DeclarationMap::get_value() const
{
	return values;
}


void DeclarationMap::set_variable(Variable *v)
{
	var = v;
}




string DeclarationMap::preTranslate() const
{
	string str = "";
	if (!keys.empty())
	{
		string temp =" {" ;
		
		for (unsigned int i = 0; i < keys.size() - 1 ; ++i)
		{
			temp += "{" + keys[i] + ", " + values[i] + "}";
		}

		temp += "{" + keys.back() + ", " + values.back()  + "} };";
				
		str += "map<" + key_type + "," + value_type + "> " + var->get_id() + temp; 
	}
	else 
	{
		str += "map<" + key_type + "," + value_type + " >" + var->get_id() + ";";
	}

	return str;


}