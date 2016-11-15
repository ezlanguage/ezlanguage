#include "function.h"

using namespace std;



function::function(): hashElement(), _parameters(), _returnType(""), _class("")
{}



function::function(const string& id, const vector< string >& param, const string& rtype, const string& className): hashElement(id), _parameters(param), _returnType(rtype), _class(className)
{}



function::function(const function& f): hashElement(f.get_id()), _parameters(f.get_param()), _returnType(f.get_returnType()), _class(f.get_class())
{}



bool function::isMethodOf(const string& className) const
{
  return (_class == className);
}



bool function::is_equal(const function& f) const
{
  bool equal = true;
  if ((hashElement::is_equal(f))&&(_class == f.get_class())&&(_returnType == f.get_returnType())&&(_parameters.size() == f.get_param().size())) {
    
    for (unsigned int i = 0; (i < _parameters.size())&&equal; ++i) {
      if (_parameters[i] != f.get_param()[i]) equal = false;
    }
    
  } 
  else equal = false;
  
  return equal;
}



void function::print(ostream& flux) const
{
  if (_class.empty()) { // function or procedure
    if (_returnType.empty()) { // procedure
      flux << "Procedure :" << endl;
      hashElement::print(flux);
      flux << endl << "Parameter(s) : ";
      if (_parameters.size() > 0) {
	for (unsigned int i = 0 ; i < (_parameters.size() - 1); ++i) flux << _parameters[i] << " , ";
	flux << _parameters[_parameters.size() - 1];
      }
    }
    else { // function
      flux << "Function :" << endl;
      hashElement::print(flux);
      flux << endl << "Parameter(s) : ";
      if (_parameters.size() > 0) {
	for (unsigned int i = 0 ; i < (_parameters.size() - 1); ++i) flux << _parameters[i] << " , ";
	flux << _parameters[_parameters.size() - 1] << endl;
      }
      flux << "Type of returned value : " << _returnType;
    }
  }
  else { // Method of class
    
    flux << "Method of the class \"" << _class << "\" : " << endl;
    hashElement::print(flux);
    flux << endl << "Parameter(s) : ";
    
    if (_parameters.size() > 0) {
      for (unsigned int i = 0 ; i < (_parameters.size() - 1); ++i) flux << _parameters[i] << " , ";
      flux << _parameters[_parameters.size() - 1] << endl;
    } 
    else flux << endl;
    
    if (_returnType.empty()) {
      flux << "No returned value";
    }
    else {
      flux << "Type of returned value : " << _returnType;
    }
    
  }
}



ostream& operator<<(ostream& flux, const function& f)
{
  f.print(flux);
  return flux;
}



bool operator==(const function& f1, const function& f2)
{
  return (f1.is_equal(f2));
}



bool operator!=(const function& f1, const function& f2)
{
  return (!f1.is_equal(f2));
}

