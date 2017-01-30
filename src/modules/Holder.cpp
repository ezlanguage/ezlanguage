//
// Created by ROUINEB Hamza
//

using namespace std;

#include "Holder.h"

Holder::Holder() {}

Holder::~Holder() {}

Holder::Holder(const string &name, TYPES type) : Node(name), _type(type) {}

Holder::Holder(const string &id, const string &name, TYPES type) : Node(name), _type(type) {}

int Holder::get_type() const {
    return _type;
}

void Holder::set_type(TYPES type) {
    _type = type;
}
