//@author : GINISTY Valentin
#ifndef DECLARATION_H
#define DECLARATION_H

#include "Node.h"

class Declaration : public Node {

protected:
	string variable;
	string type;
	string scope;
	bool isconst;

public:
	Declaration(string, string, string, bool);
	string translate();
};

#endif