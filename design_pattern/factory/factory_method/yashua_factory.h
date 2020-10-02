#ifndef YASHUA_FACTORY_H
#define YASHUA_FACTORY_H
#include "factory.h"
#include "xiaomi_yashua.h"

class YashuaFactory : public Factory{
public :
    Xiaomi* make(){
        return new XiaomiYashua();
    }
};

#endif