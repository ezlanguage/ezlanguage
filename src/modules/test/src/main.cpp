#include "../include/DeclarationContainer.h"
#include "../include/DeclarationFunction.h"
#include "../include/DeclarationProcedure.h"
#include "../include/DeclarationVariable.h"
#include <iostream>

using namespace std;

int main(int argc, char ** argv) 
{
	
	// Test DeclarationContainer
	/*DeclarationContainer d1(NULL, NULL, "v", "vector", "int", 10);
	DeclarationContainer d2(NULL, NULL, "m", "map", "int,char", 10);
	DeclarationContainer d3(NULL, NULL, "l", "list", "string", 5);
	DeclarationContainer d4(NULL, NULL, "s", "set", "double");
	DeclarationContainer d5(NULL, NULL, "a1", "array", "char", 20);
	DeclarationContainer d6(NULL, NULL, "a2", "array", "int", "1,2,3,4");
	
	cout << d1.preTranslate() << endl;
	cout << d2.preTranslate() << endl;
	cout << d3.preTranslate() << endl;
	cout << d4.preTranslate() << endl;
	cout << d5.preTranslate() << endl;
	cout << d6.preTranslate() << endl;*/
	
	// Test DeclarationFunction
	/*vector<pair<string, string> > arguments;
	arguments.push_back(make_pair("int", "a"));
	arguments.push_back(make_pair("int", "b"));
	DeclarationFunction d1(NULL, NULL, "addition", arguments, "int");
	cout << d1.preTranslate() << endl;*/
	
	
	// Test DeclarationProcedure
	/*vector<pair<string, string> > arguments;
	arguments.push_back(make_pair("int", "a"));
	arguments.push_back(make_pair("int", "b"));
	DeclarationProcedure d1(NULL, NULL, "main", arguments);
	cout << d1.preTranslate() << endl;*/
	
	
	// Test DeclarationVariable
	DeclarationVariable d1(NULL, NULL, "maVariable", "string", "locale", true, true);
	cout << d1.preTranslate() << endl;
	return 0;
}
