#ifndef XIAOMI_H
#define XIAOMI_H
#include <iostream>
#include "mix.h"
#include "miui.h"

class Xiaomi : public Company{
public:
    Xiaomi(){
        std::cout << "xiaomi company is constructed" << std::endl;
    }
    ~Xiaomi(){
        std::cout << "xiaomi company corrupted" << std::endl;
    }
    Phone* make_phone(){
        return new Mix();
    }
    OperatingSystem* make_os(){
        return new Miui();
    }
};

#endif