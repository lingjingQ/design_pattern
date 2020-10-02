#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H
#include "phone.h"
#include "operating_system.h"
#include <memory>

class AbstractFactory{
public:
    virtual ~AbstractFactory(){}

    virtual std::shared_ptr<Phone> make_phone() = 0;
    virtual std::shared_ptr<OperatingSystem> make_os() = 0;
};

#endif