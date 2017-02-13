#include <iostream>
#include <string>

#include "Array.h"

using namespace std;



/**
 * @brief 
 * 
 * @details Use :
 * 				Scope array_name.method(param..)
 * 
 * @author LAHYANI Zakaria
 */



// /* * * * * * * * *
// * CONSTRUCTORS   *
// * * * * * * * * */


Array::Array(ArrayDeclaration *dec) : declaration(dec), param1(""), param2("")
{
    //ctor
}


Array::Array(ArrayDeclaration *dec, string _param1) : declaration(dec), param1(_param1), param2("")
{
    //ctor
}


Array::Array(ArrayDeclaration *dec, string _param1, string _param2) : declaration(dec), param1(_param1), param2(_param2)
{
    //ctor
}


Array::~Array()
{
    //dtor
}



/* * * * * * * * * * * * * *
* ACCESSORS  AND MUTATORS *
* * * * * * * * * * * * * */


ArrayDeclaration * Array::get_array() const
{
	return declaration;
}


string Array::get_param1() const
{
	return param1;
}


string Array::get_param2() const
{
	return param2;
}


void Array::set_array(ArrayDeclaration  *dec)
{
	declaration = dec;
}


void Array::set_param1(string str)
{
	param1 = str;
}


void Array::set_param2(string str)
{
	param2 = str;
}



/* * * * * * * * * * * * * *
*      Translation         *
* * * * * * * * * * * * * */



string Array::preTranslate() const
{
       
	string str = "";

	switch(method)
	{
		case SIZE:
        {
		  	/**
    		* return the size of the array
		    *
		    * @author LAHYANI Zakaria
		    */

          	str = to_string(declaration->get_size()) ;
		  	break;
		}

		case CLEAR:
		{
			/**
		    * clear the array, delete all of its entries
		    *
		    * @author LAHYANI Zakaria
		    */

			str = "fill(" + declaration->get_variable()->get_id() + ".begin()," + declaration->get_variable()->get_id() + ".end(),0);";
         	break;
		}
          

		case PRINT:
		{
			/**
		    * print the array's entries
		    *
		    * @author LAHYANI Zakaria
		    */

		    str += "for ( auto it = " + declaration->get_variable()->get_id() + ".begin(); it != " + declaration->get_variable()->get_id() + ".end(); ++it )"; 
    		str += "cout << *it << endl;" ;
    		break;
		}
          

		case IS_EMPTY:
		{
			/**
		    * check whether the array is empty or not
		    *
		    * @author LAHYANI Zakaria
		    */

			str = declaration->get_variable()->get_id() + ".empty();";
		    break;
		}
		

		case FILL:
		{
			/**
		    * fill the array which its size is known
		    * @param param1 : the value to fill in
		    *
		    * @author LAHYANI Zakaria
		    */

		    str += declaration->get_variable()->get_id() + ".fill(" + param1 + ");" ;
			break;
		}


		case RANDOMIZE:
		{
			/**
		    * method to generate random values in a range
		    *
		    * @param : min value = param1
		    * @param : max value = param2
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


		case MAX:
		{
			/**
		    * return the maximum value in an array
		    *
		    * @author LAHYANI Zakaria
		    */

			str = "*max_element( "+ declaration->get_variable()->get_id() + ".begin(), "+ declaration->get_variable()->get_id() + ".end());";
          	break;
		}


			
	    case MAX_WITH_ARGS:
	    {
	    	/**
		    * return the maximum value in an array according to an attribute
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
		    * return the minimum value in an array
		    *
		    * @author LAHYANI Zakaria
		    */

	    	str = "*min_element( "+ declaration->get_variable()->get_id() + ".begin(), "+ declaration->get_variable()->get_id() + ".end());";
	    	break;
	    }


		case MIN_WITH_ARGS:
		{
		    /**
		    * return the minimum value in an array according to an attribute
		    * @param : the attribute to look for
		    *
		    * @author LAHYANI Zakaria
		    */

			str = "*min_element( "+ declaration->get_variable()->get_id() + ".begin(), "+ declaration->get_variable()->get_id() + ".end(), [](const " + declaration->get_type() +" &lhs, const " + declaration->get_type() +" &rhs) { return lhs." + param1 +" > rhs."+ param1 + " ; } );";
			break;
		}



	    case SORT:
        {
        	/**
		    * methods to sort array's values
		    *
		    * @author LAHYANI Zakaria
		    */

          	str = "sort( "+ declaration->get_variable()->get_id() + ".begin(), "+ declaration->get_variable()->get_id() + ".end());";
            break;
        }

		
		
        case SORT_WITH_ARGS:
        {
        	/**
		    * methods to sort array's values according to an attribute
		    * @param : the attribute to look for
		    *
		    * @author LAHYANI Zakaria
		    */

        	str = "sort( "+ declaration->get_variable()->get_id() + ".begin(), " + declaration->get_variable()->get_id() + ".end() ,[](const "+ declaration->get_type() +" & a, const "+ declaration->get_type() +" & b) -> bool { return a."+ param1 +" > b."+ param1 +"; } );";
            break;
        }



	    case SUM:
		{
			/**
		    * return the sum of all element in a array
		    *
		    * @author LAHYANI Zakaria
		    */

			str = "accumulate("+ declaration->get_variable()->get_id() + ".begin()," + declaration->get_variable()->get_id() + ".end(), 0);";
			break;
		}
          
		
	    case SUM_WITH_ARGS:
		{
			/**
		    * return the sum of all element in a array accordint to the attribute
		    *
		    * @author LAHYANI Zakaria
		    */

			str = "accumulate("+ declaration->get_variable()->get_id() + ".begin()," + declaration->get_variable()->get_id() + ".end(), 0, [&](" + declaration->get_type() + " a, " + declaration->get_type() + " b){return a." + param1 + " + b." + param1 + "; } );";
			break;
		}


	    case COUNT:
		{
			/**
		    * return the number of elements in a array equals to the value passed
		    *
		    * @param : the value to count
		    *
		    * @author LAHYANI Zakaria
		    */

			str =  "count ("+ declaration->get_variable()->get_id() +".begin()," + declaration->get_variable()->get_id() +".end()," + param1 + ");";
			break;
		}



	    case REMOVE:
		{
			/**
		    * remove the element in a array equals to the value passed
		    *
		    * @param : the value to remove
		    *
		    * @author LAHYANI Zakaria
		    */

			str = "auto position = find(" + declaration->get_variable()->get_id() + ".begin()," + declaration->get_variable()->get_id() + ".end()," + param1 + ");";
		    str += "if (position !="  + declaration->get_variable()->get_id()  + "end()) \n" ;
		    str += declaration->get_variable()->get_id() + ".erase(position);";
			break;
		}


		default:
        	str = "method not found !! ";
        	break;
	}

	return str;
}