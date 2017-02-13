#include <iostream>
#include <string>

using namespace std;

#include "Set.h"

/**
 * @brief 
 * 
 * @details Use :
 * 				Scope set_name.method(param..)
 * 
 * @author LAHYANI Zakaria
 */



// /* * * * * * * * *
// * CONSTRUCTORS   *
// * * * * * * * * */


Set::Set(DeclarationSet *dec) : declaration(dec), param1("")
{
    //ctor
}


Set::Set(DeclarationSet *dec, string _param1) : declaration(dec), param1(_param1)
{
    //ctor
}


Set::~Set()
{
    //dtor
}



/* * * * * * * * * * * * * *
* ACCESSORS  AND MUTATORS *
* * * * * * * * * * * * * */


DeclarationSet * Set::get_set() const
{
	return declaration;
}


string Set::get_param1() const
{
	return param1;
}


void Set::set_set(DeclarationSet  *dec)
{
	declaration = dec;
}


void Set::set_param1(string str)
{
	param1 = str;
}



/* * * * * * * * * * * * * *
*      Translation         *
* * * * * * * * * * * * * */


string Set::preTranslate() const
{
       
	string str = "";

	switch(method)
	{
		case SIZE:
        {
		  	/**
    		* return the size of the Set
		    *
		    * @author LAHYANI Zakaria
		    */

          	str = to_string(declaration->get_size()) ;
		  	break;
		}

		case CLEAR:
		{
			/**
		    * clear the Set, delete all of its entries
		    *
		    * @author LAHYANI Zakaria
		    */

			str = declaration->get_variable()->get_id() + ".clear();";
         	break;
		}
          

		case PRINT:
		{
			/**
		    * print the Set's entries
		    *
		    * @author LAHYANI Zakaria
		    */

		    str += "for(auto const& value: " + declaration->get_variable()->get_id() + ")"; 
    		str += "cout << value << endl;" ;
    		break;
		}
          

		case IS_EMPTY:
		{
			/**
		    * check whether the Set is empty or not
		    *
		    * @author LAHYANI Zakaria
		    */

			str = declaration->get_variable()->get_id() + ".empty();";
		    break;
		}


		case INSERT:
		{
			/**
		    * add element to the set
		    *
		    * @author LAHYANI Zakaria
		    */

			str = declaration->get_variable()->get_id() + ".insert(" + param1 + ");";
		    break;
		}



		case MAX:
		{
			/**
		    * return the maximum value in a set
		    *
		    * @author LAHYANI Zakaria
		    */

			str = "*prev("+ declaration->get_variable()->get_id() + ".end());";
          	break;
		}


	    case MAX_WITH_ARGS:
	    {
	    	/**
		    * return the maximum value in a Set according to an attribute
		    * @param : the attribute to look for
		    *
		    * @author LAHYANI Zakaria
		    */

	    	str = "*max_element( "+ declaration->get_variable()->get_id() + ".begin(), "+ declaration->get_variable()->get_id() + ".end(), [](const " + declaration->get_type() +" &lhs, const " + declaration->get_type() +" &rhs) { return lhs." + param1 +" < rhs."+ param1 +" ; } );";
          	break;
	    }


	    case MIN:
	    {
	    	/**
		    * return the minimum value in a Set
		    *
		    * @author LAHYANI Zakaria
		    */

	    	str = "*"+ declaration->get_variable()->get_id() + ".begin(); ";
	    	break;
	    }


		case MIN_WITH_ARGS:
		{
			/**
		    * return the minimum value in a Set according to an attribute
		    * @param : the attribute to look for
		    *
		    * @author LAHYANI Zakaria
		    */

			str = "*min_element( "+ declaration->get_variable()->get_id() + ".begin(), "+ declaration->get_variable()->get_id() + ".end(), [](const " + declaration->get_type() +" &lhs, const " + declaration->get_type() +" &rhs) { return lhs." + param1 +" > rhs."+ param1 + " ; } );";
			break;
		}


	    case SUM:
		{
			/**
		    * return the sum of all element in a Set
		    *
		    * @author LAHYANI Zakaria
		    */

			str = "int sum = 0;"+ declaration->get_variable()->get_id() + ".begin()," + declaration->get_variable()->get_id() + ".end(), 0);";
			str += "for (int i :" + declaration->get_variable()->get_id() + "){ sum += i; }";

			break;
		}
          
		
	    case SUM_WITH_ARGS:
		{
			/**
		    * return the sum of all element in a Set accordint to the attribute
		    *
		    * @author LAHYANI Zakaria
		    */

			str = "accumulate("+ declaration->get_variable()->get_id() + ".begin()," + declaration->get_variable()->get_id() + ".end(), 0, [&](" + declaration->get_type() + " a, " + declaration->get_type() + " b){return a." + param1 + " + b." + param1 + "; } );";
			break;
		}



	    case REMOVE:
		{
			/**
		    * remove the element in a Set equals to the value passed
		    *
		    * @param : the value to remove
		    *
		    * @author LAHYANI Zakaria
		    */

			str = declaration->get_variable()->get_id() + "..erase("+ param1 +");" ;
			break;
		}
	}

	return str;
}