#include "variable.h"

using namespace std;


variable::variable(): hashElement(), _type(""), _scope(0)
{}



variable::variable(string i, string t, unsigned int s, bool c): hashElement(i), _type(t), _scope(s), _const(c)
{}



variable::variable(const variable& v): hashElement(v), _type(v.get_type()), _scope(v.get_scope()), _const(v.is_const())
{}



bool variable::is_equal(const variable& v) const
{
  return ((hashElement::is_equal(v))&&(v.get_type() == _type)&&(v.get_scope() == _scope)); 
}



bool operator==(const variable& v1, const variable& v2)
{
  return (v1.is_equal(v2));
}



bool operator!=(const variable& v1, const variable& v2)
{
  return (!v1.is_equal(v2));
}



void variable::print(ostream& flux) const
{
  hashElement::print(flux);
  flux << "  ;  type = " << _type << "  ;  scope = " << _scope;
  if (_const) flux << "  ;  const";
  else flux << "  ;  not const";
}



ostream& operator<<(ostream& flux, const variable& v)
{
  v.print(flux);
  return flux;
}

string variable::translate() {
	return "traduction noeud";
}
