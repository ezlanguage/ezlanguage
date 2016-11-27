//
// Created by ROUINEB Hamza
//

#include "Holder.h"

Holder::Holder() : hashElement() {}

Holder::Holder(const string &name, Types type) : hashElement(), name(name), _type(type) {}

Holder::Holder(const string &id, const string &name, Types type) : hashElement(id), name(name), _type(type) {}

string Holder::translate() {}

