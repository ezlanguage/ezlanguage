#include "../include/DeclarationContainer.h"
#include <iostream>

using namespace std;

int main(int argc, char ** argv) 
{
	DeclarationContainer d1(NULL, NULL, "v", "vector", "int", 10);
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
	cout << d6.preTranslate() << endl;
	return 0;
}
