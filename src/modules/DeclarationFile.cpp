#include <iostream>
#include <string>

#include "DeclarationFile.h"

using namespace std;


DeclarationFile::DeclarationFile(Variable *v, string s) : var(v), path(s)
{
    //ctor
}


DeclarationFile::~DeclarationFile()
{
    //dtor
}

Variable* DeclarationFile::get_variable() const 
{
	return var;
}


string DeclarationFile::get_path() const
{
	return path;
}


string DeclarationFile::get_filename() const
{
	return var->get_id();
}


void DeclarationFile::set_variable(Variable *v)
{
	var = v;
}


void DeclarationFile::set_path(string s)
{
	path = s;
}


string DeclarationFile::preTranslate() const
{
    return "std::fstream " + var->get_id() + ";";
}


