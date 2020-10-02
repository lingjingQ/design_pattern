#ifndef HONOR_H
#define HONOR_H
#include "phone.h"
class Honor : public Phone {
public:
    Honor(){
        std::cout << "honor phone is contructed" << std::endl;
    }

    ~Honor(){
        std::cout << "honor phone is destructed" << std::endl;
    }
};

#endif