//@author : CHARLOT Rodolphe
#include <iostream>
#include <string>

/*
* This file is an add-on to the string in C++
* It's used to helping people manipulating the string class in C++
* Please ask Rodolphe or name him in your commit when you add or remove something here
*/

using namespace std;


//Add some help to add number inside a string
string operator+ (string s, int i);
string operator+ (string s, double i);
string operator+ (string s, float i);

