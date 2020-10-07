#include <iostream>
#include <unistd.h>
using namespace std;

class Dog{
public:
    string name = string(100000000,'w');
public:
    Dog(){}
};
int main(){
    Dog dog;

    // std::cout << dog.name << std::endl;
    cout << dog.name.size() << endl;
    int i = 0;
    while(1){
        usleep(100000);
        std::cout << "第" << i++ << "次new" << std::endl;
        // new对象会占用虚拟内存和物理内存，可使用top命令观察
        Dog* p = new Dog();
    }
}