#include <iostream>
#include <vector>
#include <string>

#include "Vector.h"

using namespace std;


/**
 * @brief 
 * 
 * @details Use :
 * 				Scope vector_name.method(param..)
 * 
 * @author LAHYANI Zakaria
 */



// /* * * * * * * * *
// * CONSTRUCTORS   *
// * * * * * * * * */


Vector::Vector(DeclarationVector *dec) : declaration(dec), param1(""), param2("")
{
    //ctor
}


Vector::Vector(DeclarationVector *dec, string _param1) : declaration(dec), param1(_param1), param2("")
{
    //ctor
}


Vector::Vector(DeclarationVector *dec, string _param1, string _param2) : declaration(dec), param1(_param1), param2(_param2)
{
    //ctor
}


Vector::~Vector()
{
    //dtor
}



/* * * * * * * * * * * * * *
* ACCESSORS  AND MUTATORS *
* * * * * * * * * * * * * */



DeclarationVector * Vector::get_vector() const
{
	return declaration;
}


string Vector::get_param1() const
{
	return param1;
}


string Vector::get_param2() const
{
	return param2;
}


void Vector::set_vector(DeclarationVector  *dec)
{
	declaration = dec;
}


void Vector::set_param1(string str)
{
	param1 = str;
}


void Vector::set_param2(string str)
{
	param2 = str;
}



/* * * * * * * * * * * * * *
*      Translation         *
* * * * * * * * * * * * * */



string Vector::preTranslate() const
{
       
	string str = "";

	switch(method)
	{
		case SIZE:
        {
		  	/**
    		* return the size of the vector
		    *
		    * @author LAHYANI Zakaria
		    */

          	str = to_string(declaration->get_size()) ;
		  	break;
		}

		case CLEAR:
		{
			/**
		    * clear the vector, delete all of its entries
		    *
		    * @author LAHYANI Zakaria
		    */

			str = declaration->get_variable()->get_id() + ".clear();";
         	break;
		}
          

		case PRINT:
		{
			/**
		    * print the vector's entries
		    *
		    * @author LAHYANI Zakaria
		    */

		    str += "for(auto const& value:" + declaration->get_variable()->get_id() + ")"; 
    		str += "cout << value << endl;" ;
    		break;
		}
          

		case IS_EMPTY:
		{
			/**
		    * check whether the vector is empty or not
		    *
		    * @author LAHYANI Zakaria
		    */

			str = declaration->get_variable()->get_id() + ".empty();";
		    break;
		}


		case FILL:
		{
			/**
		    * fill the vector which its size is known
		    * @param param1 : the value to fill in
		    *
		    * @author LAHYANI Zakaria
		    */

			str += "if(!" + declaration->get_variable()->get_id() + ".empty())";
		    str += "fill(" + declaration->get_variable()->get_id() + ".begin(), " + declaration->get_variable()->get_id() + ".end()," + param1 + ");" ;
		    str += "else";
		    str += "cout << The vector should have a specific size << endl;" ; 
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
	    * return the maximum value in a vector
	    *
	    * @author LAHYANI Zakaria
	    */
		case MAX:
		{
			str = "*max_element( "+ declaration->get_variable()->get_id() + ".begin(), "+ declaration->get_variable()->get_id() + ".end());";
          	break;
		}


		/**
	    * return the maximum value in a vector according to an attribute
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
	    * return the minimum value in a vector
	    *
	    * @author LAHYANI Zakaria
	    */
	    case MIN:
	    {
	    	str = "*min_element( "+ declaration->get_variable()->get_id() + ".begin(), "+ declaration->get_variable()->get_id() + ".end());";
	    	break;
	    }


	    /**
	    * return the minimum value in a vector according to an attribute
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
	    * methods to sort vector's values
	    *
	    * @author LAHYANI Zakaria
	    */
	    case SORT:
        {
          	str = "sort( "+ declaration->get_variable()->get_id() + ".begin(), "+ declaration->get_variable()->get_id() + ".end());";
            break;
        }

		
		/**
	    * methods to sort vector's values according to an attribute
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
	    * add an element at the end of the vector
	    * @param : the element to add
	    *
	    * @author LAHYANI Zakaria
	    */
		case PUT_FIRST:
		{
			str = declaration->get_variable()->get_id() + ".push_back(" + param1 + ");";
            break;
		}


		/**
	    * add an element at the begining of the vector
	    * @param : the element to add
	    *
	    * @author LAHYANI Zakaria
	    */
		case PUT_LAST:
		{
			str = declaration->get_variable()->get_id() + "insert(" + declaration->get_variable()->get_id() + ".begin()," + param1 + ");";
			break;
		}
          

		/**
	    * remove the first element in a vector
	    *
	    * @author LAHYANI Zakaria
	    */
		case REMOVE_FIRST:
		{
			str = declaration->get_variable()->get_id() + ".erase(" + declaration->get_variable()->get_id() + ".begin());";
			break;
		}
          

		/**
	    * remove the last element in a vector
	    *
	    * @author LAHYANI Zakaria
	    */
	    case REMOVE_LAST:
		{
			str = declaration->get_variable()->get_id() + ".pop_back();";
			break;
		}
          
		
		/**
	    * return the sum of all element in a vector
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
	     return the sum of all element in a vector accordint to the attribute
	    *
	    * @author LAHYANI Zakaria
	    */
	    case SUM_WITH_ARGS:
		{
			str = "accumulate("+ declaration->get_variable()->get_id() + ".begin()," + declaration->get_variable()->get_id() + ".end(), 0, [&](" + declaration->get_type() + " a, " + declaration->get_type() + " b){return a." + param1 + " + b." + param1 + "; } );";
			break;
		}
          

		/**
	    * return the average value of all element in a vector
	    *
	    * @author LAHYANI Zakaria
	    */
	    case AVERAGE:
		{
			str =  "accumulate("+ declaration->get_variable()->get_id() + ".begin()," + declaration->get_variable()->get_id() + ".end(), 0) / " + to_string(declaration->get_size()) + ";";
			break;
		}
          
		/**
	    * return average value of all element in a vector accordint to the attribute
	    *
	    * @author LAHYANI Zakaria
	    */
	    case AVERAGE_WITH_ARGS:
		{
			str =  "accumulate("+ declaration->get_variable()->get_id() + ".begin()," + declaration->get_variable()->get_id() + ".end(), 0, [&](" + declaration->get_type() + " a, " + declaration->get_type() + " b){return a." + param1 + " + b." + param1 + "; } )/ " + to_string(declaration->get_size()) + ";";
			break;
		}
          

		/**
	    * return the number of elements in a vector equals to the value passed
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
	    * return the number of elements in a vector equals to the value passed according to the attribute passed
	    *
	    * @param : the attribute to look for
	    * @param : the value to count
	    *
	    * @author LAHYANI Zakaria
	    */
	    case COUNT_WITH_ARGS:
		{
			str =  "count_if(" + declaration->get_variable()->get_id() + ".begin()," + declaration->get_variable()->get_id() + ".end(), [](const" + declaration->get_type() + "& ss){ return ss." + param1 + "== " + "\"" + param2 + "\"; })";
			break;
		}


		/**
	    * remove the element in a vector equals to the value passed
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
	    * find element in a vector equals to the value passed
	    *
	    * @param : the value to count
	    *
	    * @author LAHYANI Zakaria
	    */
	    case FIND:
		{
			str = "auto position = find(" + declaration->get_variable()->get_id()  + ".begin()," +  declaration->get_variable()->get_id()  + ".end()," +  param1 + ");" ;
     		str += "distance(" + declaration->get_variable()->get_id()  + ".begin(), position);";
			break;
		}
          

		/**
	    * find element in a vector equals to the value passed according to the attribute passed
	    *
	    * @param : the attribute to look for
	    * @param : the value to count
	    *
	    * @author LAHYANI Zakaria
	    */
	    case FIND_WITH_ARGS:
		{
			str =  "find_if(" + declaration->get_variable()->get_id()  + ".begin(),"  + declaration->get_variable()->get_id()  + ".end(), [] (const "+ declaration->get_type() +"& ss) { return ss." + param1 + "==" + param2 + "; } );";
			break;
		}


		/**
	    * store all the entries of a vector in a file
	    *
	    * @param : file_name to store in ..
	    *
	    * @author LAHYANI Zakaria
	    */
	    case STORE:
		{
			str =  "ofstream& myfile(" + param1 + ");";
     		str += "if (myfile.is_open()){ myfile << \"Data:\n\"; ";
     		str += "for(auto const& value:"  + declaration->get_variable()->get_id()  + ")\n myfile << value << endl; \n" ;
     		str += "myfile.close(); }";
     		str += "else cout << \"Unable to open file\";" ;
			break;
		}
          

		/**
	    * restore all the entries of a vector in a file
	    *
	    * @param : file_name to store in ..
	    *
	    * @author LAHYANI Zakaria
	    */
	    case RESTORE:
		{
			str =  "ofstream& myfile;";
     		str += "myfile.open(" + param1 + ", ofstream::out | ofstream::trunc);"; 
     		str += "myfile.close();" ;
     		str += "myfile.close(); }";
     		str += "ofstream& myfile(" + param1 + ");";
     		str += "if (myfile.is_open()){ myfile << \"Data:\n\"; ";
     		str += "for(auto const& value:"  + declaration->get_variable()->get_id()  + ")\n myfile << value << endl; \n" ;
     		str += "myfile.close(); }";
     		str += "else cout << \"Unable to open file\";" ;
			break;
		}
          

		/**
	    * return the first element in a vector
	    *
	    * @author LAHYANI Zakaria
	    */
	    case FIRST:
		{
			str = declaration->get_variable()->get_id() + ".front();";
			break;
		}
          
		
		/**
	    * return the last element in a vector
	    *
	    * @author LAHYANI Zakaria
	    */
	    case LAST:
		{
			str = declaration->get_variable()->get_id() + ".back();";
			break;
		}
          
		
		/**
	    * remove element at a specific position
	    *
	    * @param : position of the element to be removed
	    *
	    * @author LAHYANI Zakaria
	    */
	    case REMOVE_AT:
		{
			str = declaration->get_variable()->get_id() + ".erase(" + declaration->get_variable()->get_id() + ".begin() + stoi(" + param1 + "));";
			break;
		}
          

		/**
	    * add element at a specific position
	    *
	    * @param : position of the element to be added
	    * @param : value of the element to be added
	    *
	    * @author LAHYANI Zakaria
	    */
	    case PUT_AT:
		{
			str = declaration->get_variable()->get_id() + ".insert(" + declaration->get_variable()->get_id() + ".begin() + stoi(" + param1 + "), " + param2 + ");";
			break;
		}
                   break;


        default:
        	str = "method not found !! ";
        	break;
	}

	return str;

}