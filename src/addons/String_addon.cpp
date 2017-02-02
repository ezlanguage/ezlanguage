//@author : CHARLOT Rodolphe, ELFAQIR Ismail
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

std::vector<std::string> split(std::string const & s, char delim)
{
    std::vector<std::string> result;
    std::istringstream iss(s);

    for (std::string token; std::getline(iss, token, delim); )
    {
        result.push_back(std::move(token));
    }

    return result;
}

string join(const std::vector<std::string> &array_of_string, string join_with){
	string result="";
	for(unsigned int i=0;i<array_of_string.size();i++){
		result+=array_of_string[i];
		if(i<array_of_string.size()-1) result+=join_with;
	}
	return result;
}

string toUpperCase(const string &str){
	string result=str;
	transform(result.begin(), result.end(), result.begin(), ::toupper);
	return result;
}

string toLowerCase(const string &str){
	string result=str;
	transform(result.begin(), result.end(), result.begin(), ::tolower);
	return result;
}

string replace(const string &str, const string &to_replace ){
	string result=str;
	std::size_t found=result.find(to_replace);
	while(found!=string::npos){
		result=result.substr(found,to_replace.length());
		found=result.find(to_replace);
	}
	return result;
}

bool contains(const string &str, const string &str2){
	return str.find(str2)!=string::npos;
}
