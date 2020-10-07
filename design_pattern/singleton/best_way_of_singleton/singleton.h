#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
/*
记忆要点： 
1. 两个static。
2. 返回的“并不是”成员变量，而是一个局部的静态对象
    
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
    static Singleton& get_instance(){ // 单例模式的get_instance函数一定是static的。这样才能不定义对象本身就能调用get_instance,然后返回局部静态对象。
        static Singleton singleton; // 用局部静态对象来实现懒汉和持久特性，同时C++11保证了其在多线程环境下的线程安全性。
        return singleton;           // 局部静态对象的生命周期：定义语句第一次调用，到整个程序结束。
    }

private:
    Singleton(){
        std::cout << "constructor called" << std::endl;
    }
};


#endif