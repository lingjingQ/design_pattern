#ifndef SINGLETON_H
#define SINGLETON_H
#include <iostream>
#include <memory>
#include <mutex>
using namespace std;
class Singleton{
    static shared_ptr<Singleton> _instance;
    static std::mutex _mutex;
    Singleton(){
        std::cout << "constructor called" << std::endl;
    }
public:
    ~Singleton(){
        std::cout << "destructor called" << std::endl;
    }
    static shared_ptr<Singleton> get_instance(){
        if(_instance == nullptr){
            std::lock_guard<std::mutex> lk(_mutex);
            if(_instance == nullptr){
                _instance = shared_ptr<Singleton>(new Singleton());
            }
        }
        return _instance;
    }
    Singleton(Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

shared_ptr<Singleton> Singleton::_instance = nullptr;
std::mutex Singleton::_mutex;

#endif