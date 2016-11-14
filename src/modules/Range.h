//@author Antoine GARNIER
#ifndef RANGE_H
#define RANGE_H

#include <string>
#include "Node.h"

//this class is used in : forall i in Range(1,10)
class Range :
        public Node {
private:
    int start_iterator;
    int end_iterator;

public:
    Range();
    Range(int start_it, int end_it);

    //getters
    int get_start_iterator(){return start_iterator;};
    int get_end_iterator(){return end_iterator;};

    std::string translate();
};


#endif
