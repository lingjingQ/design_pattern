#include "singleton.h"

int main(){
    auto s1 = Singleton::get_instance(); // 智能指针本身可以赋值，而且是值语义
    auto s2 = Singleton::get_instance();
    auto s3 = Singleton::get_instance();

    return 0;
}