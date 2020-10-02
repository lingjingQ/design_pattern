#ifndef COMPANY_H
#define COMPANY_H
#include "phone.h"
#include "operating_system.h"
class Company {
public:
    virtual ~Company(){}
    virtual Phone* make_phone() = 0;
    virtual OperatingSystem* make_os() = 0; 
};

#endif