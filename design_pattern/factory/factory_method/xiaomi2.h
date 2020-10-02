#ifndef XIAOMI2_H
#define XIAOMI2_H

#include <iostream>
#include "xiaomi.h"

class Xiaomi2 : public Xiaomi {
public:
    Xiaomi2(){
        std::cout << "xiaomi2 constructed" << std::endl;
    }

    ~Xiaomi2(){
        std::cout << "xiaomi2 destructed" << std::endl;
    }
};


#endif