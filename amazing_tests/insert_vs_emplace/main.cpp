#include <set>
#include <iostream>
#include <string>
using namespace std;

struct Dog{
    private:
        string _name;
    public:
        Dog(string name = "") : _name(name){
            cout << "Dog constructed" << endl;
        } 
        string getName() const { // 这里的const必须要加，否则全局重载函数中的const引用就不能调用该方法
            return _name;
        }
};

bool operator < (const Dog& d1, const Dog& d2){ // const引用，只能调用const修饰函数体的方法,也就是getName需要是const的
    return d1.getName() <= d2.getName();
}

/*
要点：
   1. 插入的两种写法，都会执行构造函数，并无效率上的差别。
   2. 重载函数
*/

int main(){
    set<Dog> myset;
    myset.insert(Dog("wangcai"));
    myset.emplace("xiaohuang");
}