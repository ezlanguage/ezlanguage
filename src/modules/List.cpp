#include <iostream>
#include <string>

#include "List.h"

using namespace std;



/**
 * @brief 
 * 
 * @details Use :
 * 				Scope list_name.method(param..)
 * 
 * @author LAHYANI Zakaria
 */



// /* * * * * * * * *
// * CONSTRUCTORS   *
// * * * * * * * * */


List::List(DeclarationList *dec) : declaration(dec), param1(""), param2("")
{
    //ctor
}


List::List(DeclarationList *dec, string _param1) : declaration(dec), param1(_param1), param2("")
{
    //ctor
}


List::List(DeclarationList *dec, string _param1, string _param2) : declaration(dec), param1(_param1), param2(_param2)
{
    //ctor
}


List::~List()
{
    //dtor
}


/* * * * * * * * * * * * * *
* ACCESSORS  AND MUTATORS *
* * * * * * * * * * * * * */


DeclarationList * List::get_list() const
{
	return declaration;
}


string List::get_param1() const
{
	return param1;
}


string List::get_param2() const
{
	return param2;
}


void List::set_list(DeclarationList  *dec)
{
	declaration = dec;
}


void List::set_param1(string str)
{
	param1 = str;
}


void List::set_param2(string str)
{
	param2 = str;
}


/* * * * * * * * * * * * * *
*      Translation         *
* * * * * * * * * * * * * */


string List::preTranslate() const
{
       
	string str = "";

	switch(method)
	{
		case SIZE:
        {
		  	/**
    		* return the size of the List
		    *
		    * @author LAHYANI Zakaria
		    */

          	str = to_string(declaration->get_size()) ;
		  	break;
		}


		case CLEAR:
		{
			/**
		    * clear the List, delete all of its entries
		    *
		    * @author LAHYANI Zakaria
		    */

			str = declaration->get_variable()->get_id() + ".clear();";
         	break;
		}


		case PRINT:
		{
			/**
		    * print the List's entries
		    *
		    * @author LAHYANI Zakaria
		    */
	
		    str += "for (auto iterator = " + declaration->get_variable()->get_id() + ".begin(), iterator = " + declaration->get_variable()->get_id() + ".end(); ++iterator) {"; 
    		str += "cout << *iterator << endl;}" ;
    		break;
		}
          

		case IS_EMPTY:
		{
			/**
		    * check whether the List is empty or not
		    *
		    * @author LAHYANI Zakaria
		    */

			str = declaration->get_variable()->get_id() + ".empty();";
		    break;
		}


		case FILL:
		{
			/**
		    * fill the List which its size is known
		    * @param param1 : the value to fill in
		    *
		    * @author LAHYANI Zakaria
		    */

			str += "if(!" + declaration->get_variable()->get_id() + ".empty())";
		    str += "fill(" + declaration->get_variable()->get_id() + ".begin(), " + declaration->get_variable()->get_id() + ".end()," + param1 + ");" ;
		    str += "else";
		    str += "cout << The List should have a specific size << endl;" ; 
			break;
		}


		case RANDOMIZE:
		{
			/**
		    * method to generate random values in a range
		    *
		    * @param : min value
		    * @param : max value
		    *
		    * @author LAHYANI Zakaria
		    */

		    str += "if(typeid(" + declaration->get_type() + ") == typeid(string)){" ; 
		    str += "static const char alphanum[] = \"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\"; " ; 
		    str += "string s;";
		    str += "for(int i = 0; i < rand() % ( stoi( " + param2 + ") - stoi("  + param1 + ") + 1); ++i)" ; 
		    str += "{s += alphanum[rand() % 40];}";
		    str +=    "generate (" + declaration->get_variable()->get_id() + ".begin()," + declaration->get_variable()->get_id() + ".end(), s);";
		    str +=    "}else{ generate (" + declaration->get_variable()->get_id() + ".begin()," + declaration->get_variable()->get_id() +".end(), rand() %  ( stoi( " + param2 + ") - stoi("  + param1 + ") + 1) ); }" ;

			break;
		}


		/**
	    * return the maximum value in a List
	    *
	    * @author LAHYANI Zakaria
	    */
		case MAX:
		{
			str = "*max_element( "+ declaration->get_variable()->get_id() + ".begin(), "+ declaration->get_variable()->get_id() + ".end());";
          	break;
		}


		/**
	    * return the maximum value in a List according to an attribute
	    * @param : the attribute to look for
	    *
	    * @author LAHYANI Zakaria
	    */
	    case MAX_WITH_ARGS:
	    {
	    	str = "*max_element( "+ declaration->get_variable()->get_id() + ".begin(), "+ declaration->get_variable()->get_id() + ".end(), [](const " + declaration->get_type() +" &lhs, const " + declaration->get_type() +" &rhs) { return lhs." + param1 +" < rhs."+ param1 +" ; } );";
          	break;
	    }


		/**
	    * return the minimum value in a List
	    *
	    * @author LAHYANI Zakaria
	    */
	    case MIN:
	    {
	    	str = "*min_element( "+ declaration->get_variable()->get_id() + ".begin(), "+ declaration->get_variable()->get_id() + ".end());";
	    	break;
	    }


	    /**
	    * return the minimum value in a List according to an attribute
	    * @param : the attribute to look for
	    *
	    * @author LAHYANI Zakaria
	    */
		case MIN_WITH_ARGS:
		{
			str = "*min_element( "+ declaration->get_variable()->get_id() + ".begin(), "+ declaration->get_variable()->get_id() + ".end(), [](const " + declaration->get_type() +" &lhs, const " + declaration->get_type() +" &rhs) { return lhs." + param1 +" > rhs."+ param1 + " ; } );";
			break;
		}


		/**
	    * methods to sort List's values
	    *
	    * @author LAHYANI Zakaria
	    */
	    case SORT:
        {
          	str = "sort( "+ declaration->get_variable()->get_id() + ".begin(), "+ declaration->get_variable()->get_id() + ".end());";
            break;
        }

		
		/**
	    * methods to sort List's values according to an attribute
	    * @param : the attribute to look for
	    *
	    * @author LAHYANI Zakaria
	    */
        case SORT_WITH_ARGS:
        {
        	str = "sort( "+ declaration->get_variable()->get_id() + ".begin(), " + declaration->get_variable()->get_id() + ".end() ,[](const "+ declaration->get_type() +" & a, const "+ declaration->get_type() +" & b) -> bool { return a."+ param1 +" > b."+ param1 +"; } );";
            break;
        }


        /**
	    * return the sum of all element in a List
	    *
	    * @author LAHYANI Zakaria
	    */
	    case SUM:
		{
			str = "accumulate("+ declaration->get_variable()->get_id() + ".begin()," + declaration->get_variable()->get_id() + ".end(), 0);";
			break;
		}
          
		
		/**
	    *
	     return the sum of all element in a List accordint to the attribute
	    *
	    * @author LAHYANI Zakaria
	    */
	    case SUM_WITH_ARGS:
		{
			str = "accumulate("+ declaration->get_variable()->get_id() + ".begin()," + declaration->get_variable()->get_id() + ".end(), 0, [&](" + declaration->get_type() + " a, " + declaration->get_type() + " b){return a." + param1 + " + b." + param1 + "; } );";
			break;
		}


		/**
	    * return the number of elements in a List equals to the value passed
	    *
	    * @param : the value to count
	    *
	    * @author LAHYANI Zakaria
	    */
	    case COUNT:
		{
			str =  "count ("+ declaration->get_variable()->get_id() +".begin()," + declaration->get_variable()->get_id() +".end()," + param1 + ");";
			break;
		}


		/**
	    * remove the element in a List equals to the value passed
	    *
	    * @param : the value to remove
	    *
	    * @author LAHYANI Zakaria
	    */
	    case REMOVE:
		{
			str = "auto position = find(" + declaration->get_variable()->get_id() + ".begin()," + declaration->get_variable()->get_id() + ".end()," + param1 + ");";
		    str += "if (position !="  + declaration->get_variable()->get_id()  + "end()) \n" ;
		    str += declaration->get_variable()->get_id() + ".erase(position);";
			break;
		}


		/**
	    * return the first element in a List
	    *
	    * @author LAHYANI Zakaria
	    */
	    case FIRST:
		{
			str = declaration->get_variable()->get_id() + ".front();";
			break;
		}
          
		
		/**
	    * return the last element in a List
	    *
	    * @author LAHYANI Zakaria
	    */
	    case LAST:
		{
			str = declaration->get_variable()->get_id() + ".back();";
			break;
		}

	}

	return str;
}