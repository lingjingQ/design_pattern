#include <iostream>
#include <cassert>

// 移动就是对右值的拷贝，类似于浅拷贝，但是最终并没有数据共享，而是窃取数据。
// 因为右值是临时对象，是即将销毁的对象，因此右值在初始化对象的时候，理论上就不需要拷贝，直接让对象接管内存即可。
class X{
public:
    int* data;
public:
    X():data(new int[100000]){}

    ~X() {
        delete[] data;
    }

    X(const X& other):data(new int[100000]){
        std::cout <<"copy constructor" << std::endl;
        std::copy(other.data, other.data+100000, data);
    }
    // 移动构造函数，没有copy操作
    X(X&& other):data(other.data){
        std::cout << "move constructor" << std::endl;
        other.data = nullptr;
    }
    X& operator = (X&& other){
        std::cout << "move assignment" << std::endl;
        data = other.data;
        other.data = nullptr;
        return *this;
    }
};

void fun(X&& x_){
    X a(x_); 
    X b(std::move(x_));
}

template<typename T>
void foo(T&& t){

}


struct Animal{
    Animal(){}
};

struct Dog : public Animal{

};

int main(){
    X x1;
    // 以下3行都是调用移动构造函数
    X x2 = std::move(x1); 
    X x3 = static_cast<X&&>(x2);
    X x4(std::move(x3));
    
    X x5;
    // 调用移动赋值运算符
    x5 = std::move(x4);
}