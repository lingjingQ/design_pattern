#ifndef HUAWEI_H
#define HUAWEI_H
#include "abstract_factory.h"
#include "phone.h"
#include "honor.h"
#include "operating_system.h"
#include "hongmeng.h"
#include <iostream>
#include <memory>

class Huawei : public AbstractFactory{
public:
    Huawei(){
        std::cout << "huawei established" << std::endl;
    }

    ~Huawei(){
        std::cout << "huawei corrupted" << std::endl;
    }

    std::shared_ptr<Phone> make_phone(){
        return std::make_shared<Honor>();
    }

    std::shared_ptr<OperatingSystem> make_os(){
        return std::make_shared<Hongmeng>();
    }

};

#endif