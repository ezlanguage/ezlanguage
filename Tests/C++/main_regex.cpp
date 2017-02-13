//Created by NAJI Ibtissam

#include <iostream>
#include <regex>

using namespace std;

int main() {
    string s1 = ("This is a global example");
    string s2 = ("hello world! here you can find a global example! ");
    string s3 = ("hello world! here you can find a global example! ");

    cout << "Match example : " << endl;

    regex r1("(This)(.*)");

    if (regex_match(s1, r1))
        cout << "String object matched" << endl;

    cout << endl;
    cout << "Search example : " << endl;


    regex r2("\\b(he)([^ ]*)");

    smatch m;

    while (std::regex_search(s2, m, r2)) {
        for (auto x:m)
            cout << x << " ";
        cout << std::endl;
        s2 = m.suffix().str();
    }
    cout << endl;

    cout << "Replace example : " << endl;
    regex r3("\\b(he)([^ ]*)");

    cout << regex_replace(s3, r3, "He-$2") << endl;

    return 0;
}
