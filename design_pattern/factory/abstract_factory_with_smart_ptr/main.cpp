#include<memory>
#include "huawei.h"
#include "abstract_factory.h"
#include "phone.h"
#include "operating_system.h"

using namespace std;

// 整个程序都使用智能指针，没有new, 程序结束后会自动释放所有堆内存，调用析构函数。

int main(){
    shared_ptr<AbstractFactory> huawei = make_shared<Huawei>();
    shared_ptr<Phone> honor = huawei->make_phone();
    shared_ptr<OperatingSystem> hongmeng = huawei->make_os();
}