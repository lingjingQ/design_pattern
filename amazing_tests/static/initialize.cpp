#include <iostream>

int init() {
    return 10;
}

struct Y{
    Y(){std::cout << "y construct" << std::endl;}
};

struct X{
    X(){
        std::cout << "construct" << std::endl;
    }
public:
    int val = 3;
    static Y y;  // static 成员，必须在类外面定义，不属于类对象，而是整个类的对象共有的，甚至可以独立于类对象而存在，有点像“和类绑定的全局变量”
    static X& get_instance(){
        std::cout << "static first" << std::endl;
        static X instance;  // 局部静态对象，声明周期从第一次执行定义语句开始，直到整个程序结束。
        return instance;
    }
};

Y X::y;  // 只有在这里定义，才会执行Y的构造函数，如果没有这一句，即便构造了X，Y也还是没有构造。

int main(){
    // X& x = X::get_instance();
    int x = 1;
    // switch(x){
    //     case 0:
    //         static X value;
    //     case 1:
    //         std::cout << value.val << std::endl;
    // } // 会输出0，因为局部静态对象的定义语句并没有执行到，这里输出的是编译器初始化的内容。因为在作用域范围内。
}