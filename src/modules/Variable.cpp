#include "Variable.h"

using namespace std;


Variable::Variable(): HashElement(), _type(""), _scope(0)
{}



Variable::Variable(const string & i, const string & t, bool c): HashElement(i), _type(t), _scope(0), _const(c)
{}



Variable::Variable(const Variable& v): HashElement(v), _type(v.get_type()), _scope(v.get_scope()), _const(v.is_const())
{}



bool Variable::is_equal(const Variable& v) const
{
  return ((HashElement::is_equal(v))&&(v.get_type() == _type)&&(v.get_scope() == _scope)); 
}



bool operator==(const Variable& v1, const Variable& v2)
{
  return (v1.is_equal(v2));
}



bool operator!=(const Variable& v1, const Variable& v2)
{
  return (!v1.is_equal(v2));
}



void Variable::print(ostream& flux) const
{
  HashElement::print(flux);
  flux << "  ;  type = " << _type << "  ;  scope = " << _scope;
  if (_const) flux << "  ;  const";
  else flux << "  ;  not const";
}



ostream& operator<<(ostream& flux, const Variable& element)
{
  element.print(flux);
  return flux;
}
