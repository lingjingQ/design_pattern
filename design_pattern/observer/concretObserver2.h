#ifndef CONCRET_OBSERVER2_H
#define CONCRET_OBSERVER2_H

#include "observer.h"
#include <iostream>

class ConcretObserver2 : public Observer{
public:
    void update(int m) {
        std::cout << "observer2 : subject told me " << m << std::endl;
    }
};

#endif