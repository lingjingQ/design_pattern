#ifndef XIAOMI_YASHUA_H
#define XIAOMI_YASHUA_H
#include <iostream>
#include "xiaomi.h"

class XiaomiYashua : public Xiaomi{
public:
    XiaomiYashua(){
        std::cout << "xiaomi yashua constructed" << std::endl;
    }
    ~XiaomiYashua(){
        std::cout << "xiaomi yashua destructed" << std::endl;
    }
};

#endif 