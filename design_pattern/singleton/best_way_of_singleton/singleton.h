#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
/*
优点：
1. 不需要用指针。
2. 不需要加锁。
*/

class Singleton {
public:
    ~Singleton(){
        std::cout << "destructor called" << std::endl;
    }
    Singleton(Singleton& single) = delete;
    Singleton& operator=(const Singleton&) = delete;
    static Singleton& get_instance(){ // 单例模式的get_instance函数一定是static的。
        static Singleton singleton; // 用局部静态对象来实现懒汉和持久特性，同时C++11保证了其在多线程环境下的线程安全性。
        return singleton;
    }

private:
    Singleton(){
        std::cout << "constructor called" << std::endl;
    }
};


#endif