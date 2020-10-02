

// 小米公司生产Mix手机和miui操作系统

// 华为公司生产Honor手机和hongmeng操作系统

// 公司的抽象类 Company, 子类Xiaomi， Huawei

// 手机的抽象类  Phone ， 子类Mix， Honor

// 操作系统抽象类  OperatingSystem， 子类Miui， Hongmeng，


// 用户的基本逻辑： 一个公司，生产一部手机
              // 一个公司，生产一个操作系统
#include <iostream>
#include "hongmeng.h"
#include "honor.h"
#include "company.h"
#include "huawei.h"
#include "xiaomi.h"

int main(){
    Company* huawei = new Huawei();
    Phone* honor = huawei->make_phone();
    OperatingSystem* hongmeng = huawei->make_os();


    Company* xiaomi = new Xiaomi();
    Phone* mix = xiaomi->make_phone();
    OperatingSystem* miui = xiaomi->make_os();


    delete huawei; delete honor; delete hongmeng;
    delete xiaomi; delete mix; delete miui;
}