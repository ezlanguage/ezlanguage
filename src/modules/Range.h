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

    std::string translate();
};


#endif
