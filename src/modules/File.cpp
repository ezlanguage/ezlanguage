#include <fstream>
#include <iostream>
#include <string>
#include <sys/stat.h>

#include "File.h"

using namespace std;

/**
 * @brief 
 * 
 * @details Use :
 * 
 * @author LAHYANI Zakaria
 */


File::File(DeclarationFile *f, string _path) : file(f), path(_path)
{
    //ctor
}


File::~File()
{
    //dtor
}


string File::get_path() const
{
	return path;

}


string File::get_begin() const
{
	return begin;
	
}


string File::get_end() const
{
	return end;
	
}


string File::get_pattern() const
{
	return pattern;
}


string File::get_delimeter() const
{
	return delimeter;
	
}


string File::get_content() const
{
	return content;
	
}


int File::get_line_number() const
{
	return line_number;
	
}


void File::set_path(string p) 
{
	path = p;
}


void File::set_begin(string p) 
{
	begin = p;
}


void File::set_end(string p) 
{
	end = p;
}


void File::set_pattern(string p) 
{
	pattern = p;
}


void File::set_content(string p) 
{
	content = p;
}


void File::set_delimeter(string p) 
{
	delimeter = p;
}


void File::set_line_number(int p) 
{
	line_number = p;
}

string File::preTranslate() const
{
	string str = "";
	switch(method)
	{
		/**
		* Please include the <sys/stat.h> header for that to work properly
		*/ 
		case IS_FILE : 
		{
    		str = "struct stat buf;";
    		str += "stat(" + path + "," + "&buf);";
    		str += "S_ISREG(buf.st_mode);";
		}

		case IS_DIRECTORY : 
		{
    		str = "struct stat buf;";
    		str += "stat(" + path + "," + "&buf);";
    		str += "S_ISDIR(buf.st_mode);";
		}

		case MAKE_DIRECTORY : 
		{
    		str = "const int dir_err = system(\"mkdir -p " + path + "\");";
    		str += "if (-1 == dir_err){\n";
    		str += "printf(\"Error creating directory!\"); exit(1); }";
		}

		/**
		* Please include the fstream header for that to work properly
		*/
		case OPEN : 
		{
    		str = file->get_filename() + ".open("+ path + ", std::fstream::in | std::fstream::out | std::fstream::app | ios::binary | ios::ate);";
		}
		
		case IS_EMPTY : 
		{
    		str = file->get_filename() + ".peek() == std::ifstream::traits_type::eof();";
		}
		
		case GET_TEXT : 
		{	
			str = "string s; getline( " + file->get_filename() + " , s, '\0');";
		}
		
		case GET_TEXT_WITH_ARGS : 
		{	
			str = "string s ="";";
			str += "string result = "";";
			str += "getline( " + file->get_filename() + " , s, '\0');";
			str += "size_t first = s.find_first_of( "+ begin +" );";
			str += "size_t last  = s.find_first_of( "+ end + ");";
			str += "for(size_t i = first; i < last; ++i){";
			str += 	"result += s[i];}";
		}

		/**
		* NB : For the guy who manage the headers, don't forget to include the "#include <regex>"
		*/
		case GET_TEXT_REGEX : 
		{	
			str = "vector<string> store;";
			str += "string s ="";";
			str += "getline( " + file->get_filename() + " , s, '\0');";
			str += "regex regex(" + pattern + "+$);";
			str += "store.push_back(regex_match(s, regex));";
		}


		case GET_NBR_LINES : 
		{	
			str = "count_if(istreambuf_iterator<char>(" + file->get_filename() + "),istreambuf_iterator<char>(),'\n');";
		}


		case GET_LINE_ARGG_NUMBER : 
		{	
			str = "string line;";
			str = "string result;";
			str += "unsigned int line_number(1);";
			str += "const unsigned int requested_line_number(" + to_string(line_number) + ");";
			str += "while (getline(" + file->get_filename() + ", line)){";
			str += "if (line_number == requested_line_number){";
			str += "result = line ;}"    ;            
			str += "line_number++;}";
			str = "result";
		}


		case WRITE : 
		{	
			str =  file->get_filename() + " << " + content + " ;";
		}


		case SIZE : 
		{	
			str =  file->get_filename() + ".tellg(); ";
		}


		case CLOSE : 
		{	
			str =  file->get_filename() + ".close(); ";
		}

	}

	return str;
}


 