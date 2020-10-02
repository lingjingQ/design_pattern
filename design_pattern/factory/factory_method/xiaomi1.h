#ifndef XIAOMI1_H
#define XIAOMI1_H
#include <iostream>
class Xiaomi1 : public Xiaomi{
public :
    Xiaomi1 (){
        std::cout << "xiaomi1 constructed" << std::endl;
    }
    ~Xiaomi1(){
        std::cout << "xiaomi1 destructed" << std::endl;
    }
};

#endif