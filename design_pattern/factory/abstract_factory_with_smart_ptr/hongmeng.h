#ifndef HONGMENG_H
#define HONGMENG_H
#include <iostream>
#include <memory>
#include "operating_system.h"

class Hongmeng : public OperatingSystem{
public:
    Hongmeng(){
        std::cout << "Hongmeng os is constructed" << std::endl;
    }

    ~Hongmeng(){
        std::cout << "Hongmeng os is destroyed" << std::endl;
    }
};

#endif 