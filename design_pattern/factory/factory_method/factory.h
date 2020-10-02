#ifndef FACTORY_H
#define FACTORY_H

#include "xiaomi.h"
class Factory{
public:
    virtual Xiaomi* make() = 0;
};

#endif