//@author : Ismail ELFAQIR
#include "ArrayAccess.h"

using namespace std;

ArrayAccess::ArrayAccess():array(NULL), index(0) {
	name= "Array Access";
}

ArrayAccess::ArrayAccess(ArrayDeclaration *a, int i ): array(a), index(i){
	name= "Array Access";
}

ArrayAccess::ArrayAccess(const ArrayAccess & cpy):array(cpy.array), index(cpy.index){
	name= "Array Access";
}
ArrayAccess::~ArrayAccess(){
}

ArrayDeclaration* ArrayAccess::get_array() const{
	return array;
}

int ArrayAccess::get_index() const{
	return index;
}

void ArrayAccess::set_array(ArrayDeclaration *a) {
	array=a;
}

void ArrayAccess::set_index(int i) {
	index=i;
}

string ArrayAccess::translate() const {
	string result= array->get_variable()->get_id()+"["+to_string(index)+"]";
	return result;
}

