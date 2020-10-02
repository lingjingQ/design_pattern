#ifndef HONGMENG_H
#define HONGMENG_H
#include "operating_system.h"
#include <iostream>
class Hongmeng : public OperatingSystem {
public:
    Hongmeng(){
        std::cout << "hongmeng os is contructed" << std::endl;
    }

    ~Hongmeng(){
        std::cout << "hongmeng os is destructed" << std::endl;
    }
};

#endif