#ifndef MIUI_H
#define MIUI_H
#include "operating_system.h"
#include <iostream>
class Miui : public OperatingSystem{
public:
    Miui(){
        std::cout << "miui is constructed" << std::endl;
    }
    ~Miui(){
        std::cout << "miui is destroyed" << std::endl;
    }
};

#endif