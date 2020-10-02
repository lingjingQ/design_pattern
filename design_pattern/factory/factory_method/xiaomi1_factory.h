#ifndef XIAOMI_FACTORY_H
#define XIAOMI_FACTORY_H
#include "factory.h"
#include "xiaomi1.h"

class Xiaomi1Factory : public Factory{
public:
    Xiaomi* make(){
        return new Xiaomi1();
    }
};

#endif