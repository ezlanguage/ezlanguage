#include <iostream>
#include <string>

#include "Map.h"

using namespace std;


/**
 * @brief 
 * 
 * @details Use :
 * 				Scope map_name.method(param..)
 * 
 * @author LAHYANI Zakaria
 */



// /* * * * * * * * *
// * CONSTRUCTORS   *
// * * * * * * * * */



Map::Map(DeclarationMap *dec) : declaration(dec)
{
    //ctor
}


Map::Map(DeclarationMap *dec, string _key, string _val) : declaration(dec), key(_key), value(_val)
{
    //ctor
}


Map::~Map()
{
    //dtor
}




/* * * * * * * * * * * * * *
* ACCESSORS  AND MUTATORS *
* * * * * * * * * * * * * */



DeclarationMap * Map::get_map() const
{
	return declaration;
}


string Map::get_key() const
{
	return key;
}


string Map::get_value() const
{
	return value;
}


void Map::set_map(DeclarationMap  *dec)
{
	declaration = dec;
}


void Map::set_key(string str)
{
	key = str;
}


void Map::set_value(string str)
{
	value = str;
}



/* * * * * * * * * * * * * *
*      Translation         *
* * * * * * * * * * * * * */


string Map::preTranslate() const
{
       
	string str = "";

	switch(method)
	{
		case SIZE:
        {
		  	/**
    		* return the size of the Map
		    *
		    * @author LAHYANI Zakaria
		    */

          	str = declaration->get_variable()->get_id() + ".size()";
		  	break;
		}

		case CLEAR:
		{
			/**
		    * clear the Map, delete all of its entries
		    *
		    * @author LAHYANI Zakaria
		    */

			str = declaration->get_variable()->get_id() + ".clear();";
         	break;
		}
          

		case PRINT:
		{
			/**
		    * print the Map's entries
		    *
		    * @author LAHYANI Zakaria
		    */

		    str += "for (auto it=" + declaration->get_variable()->get_id() + ".begin(); it!=" + declaration->get_variable()->get_id() + ".end(); ++it)"; 
    		str += "cout << it->first << \" => \" << it->second << endl;" ;
    		break;
		}
          

		case IS_EMPTY:
		{
			/**
		    * check whether the Map is empty or not
		    *
		    * @author LAHYANI Zakaria
		    */

			str = declaration->get_variable()->get_id() + ".empty();";
		    break;
		}


		case INSERT:
		{
			/**
		    * insert a new entry in a map
		    *
		    * @author LAHYANI Zakaria
		    */

			str = declaration->get_variable()->get_id() + ".emplace(" + key + ", "+ value + ");";
		    break;
		}


		case EXIST:
		{
			/**
		    * CHECK WHether an element exist 
		    *
		    * @author LAHYANI Zakaria
		    */

			str = "auto exist = " +  declaration->get_variable()->get_id() + ".find(" + key + ");";
			str += "return exist != " +  declaration->get_variable()->get_id() + ".end();";
		    break;
		}


		case FIND:
		{
			/**
		    * find an element
		    *
		    * @author LAHYANI Zakaria
		    */

			str =  declaration->get_variable()->get_id() + ".find(" + key + ");";
		    break;
		}


		case REMOVE:
		{
			/**
		    * remove an entry
		    *
		    * @author LAHYANI Zakaria
		    */

			str =  declaration->get_variable()->get_id() + ".erase(" + key + ");";
		    break;
		}
	}

	return str;

}