#include "factory.h"
#include "xiaomi1_factory.h"
#include "xiaomi.h"
#include <iostream>
#include "xiaomi2_factory.h"
#include "yashua_factory.h"
#include "xiaomi_yashua.h"

int main(){
    // 小米公司创造各种产品，每个产品都联系一个代工厂来创建。
        // 1. 产品本身是什么样子由代工厂来决定/维护。
        // 2. Factory是小米的代工厂的抽象类。
        // 3. Xiaomi是小米的所有产品的抽象类。

        // 4. 基本的逻辑就是：小米的一个代工厂，make了一个小米的产品。
            // 具体是什么产品，由具体的代工厂自己来决定。

    Factory* xiaomi1Factory = new Xiaomi1Factory();
    Xiaomi* phone1 = xiaomi1Factory->make();


    Factory* xiaomi2Factory = new Xiaomi2Factory();
    Xiaomi* phone2 = xiaomi2Factory->make();

    Factory* yashuaFactory = new YashuaFactory();
    Xiaomi* yashua = yashuaFactory->make();

    delete xiaomi1Factory;  delete phone1;
    delete xiaomi2Factory; delete phone2;
    delete yashuaFactory;  delete yashua;
}