#ifndef SINGLETON_H
#define SINGLETON_H
#include <iostream>

// 缺点
// 1. 使用原始指针，无法调用xigou函数。 -------- 使用智能指针
// 2. 非线程安全。 -------- 使用双检查锁

class Singleton{

    Singleton(){
        std::cout << "constructor called" << std::endl;
    }

    static Singleton* _instance;
public:
    ~Singleton(){  // 注意，这个析构函数并不会执行，因为这是原始指针，需要我们调用delete才行。
        std::cout << "destructor called" << std::endl;
        delete _instance;
        _instance = nullptr;
    }


    Singleton(Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    static Singleton* get_instance(){
        if(_instance == nullptr){
            _instance = new Singleton();
        }
        return _instance;
    }
};

Singleton* Singleton::_instance = nullptr;

#endif