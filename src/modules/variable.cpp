#include "variable.h"

using namespace std;


variable::variable(): hashElement(), _type(""), _scope(0)
{}



variable::variable(string i, string t, unsigned int s): hashElement(i), _type(t), _scope(s)
{}



variable::variable(const variable& v): hashElement(v), _type(v.get_type()), _scope(v.get_scope())
{}



bool variable::is_equal(const variable& v) const
{
  return ((hashElement::is_equal(v))&&(v.get_type() == _type)&&(v.get_scope() == _scope)); 
}



bool operator==(const variable& v1, const variable& v2)
{
  return v1.is_equal(v2);
}



void variable::print(ostream& flux) const
{
  hashElement::print(flux);
  flux << "  ;  type = " << _type << "  ;  scope = " << _scope;
}



ostream& operator<<(ostream& flux, const variable& v)
{
  v.print(flux);
  return flux;
}

