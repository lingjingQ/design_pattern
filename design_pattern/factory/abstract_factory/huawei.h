#ifndef HUAWEI_H
#define HUAWEI_H
#include <iostream>
#include "company.h"
class Huawei : public Company {
public:
    Huawei(){
        std::cout << "huawei company is established!" << std::endl;
    }
    ~Huawei(){
        std::cout << "huawei company bankrupt!" << std::endl;
    }

    Phone* make_phone(){
        return new Honor();
    }

    OperatingSystem* make_os(){
        return new Hongmeng();
    }
};

#endif