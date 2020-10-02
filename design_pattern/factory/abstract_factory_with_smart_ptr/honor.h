#ifndef HONOR_H
#define HONOR_H
#include "phone.h"
#include <iostream>
class Honor : public Phone{
public:
    Honor(){
        std::cout << "Honor phone is constructed" << std::endl;
    }
    ~Honor(){
        std::cout << "Honor phone is destroyed" << std::endl;
    }
};

#endif