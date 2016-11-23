//@author : CHARLOT Rodolphe
#include "String_addon.h"

string operator+ (string s, int i)
{
    return s+to_string(i);
}
string operator+ (string s, double i)
{
    return s+to_string(i);
}
string operator+ (string s, float i)
{
    return s+to_string(i);
}
