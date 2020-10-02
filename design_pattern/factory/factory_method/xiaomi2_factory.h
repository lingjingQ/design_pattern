#ifndef XIAOMI2_FACTORY_H
#define XIAOMI2_FACTORY_H
#include "factory.h"
#include "xiaomi2.h"
class Xiaomi2Factory : public Factory{
public :
    Xiaomi* make(){
        return new Xiaomi2();
    }
};

#endif