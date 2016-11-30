//@author Antoine GARNIER
#include "Range.h"

using namespace std;

Range::Range(): start_iterator(0), end_iterator(0){};
Range::Range(int start_it, int end_it): start_iterator(start_it), end_iterator(end_it){};

string Range::translate(){
    return to_string(start_iterator) + ".." + to_string(start_iterator);
}
