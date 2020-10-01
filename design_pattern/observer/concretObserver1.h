#ifndef CONCRET_OBSERVER1_H
#define CONCRET_OBSERVER1_H

#include "observer.h"
#include <iostream>
class ConcretObserver1 : public Observer{
public:
    void update(int m){
        std::cout << "observer1 : subject told me " << m << std::endl;
    }
};

#endif