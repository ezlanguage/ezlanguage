#include "hashElement.h"

using namespace std;


hashElement::hashElement(): _id("")
{}



hashElement::hashElement(const string & s): _id(s)
{}



hashElement::hashElement(const hashElement & e): _id(e.get_id())
{}



bool hashElement::is_equal(const hashElement& e) const
{
  return (e.get_id() == _id);
}



bool operator==(const hashElement& e1, const hashElement& e2)
{
  return (e1.is_equal(e2));
}



bool operator!=(const hashElement& e1, const hashElement& e2)
{
  return (!e1.is_equal(e2));
}

