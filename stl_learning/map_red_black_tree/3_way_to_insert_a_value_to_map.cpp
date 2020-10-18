#include <iostream>
#include <map>

/*
要点：
1. emplace相对于insert而言，就是写法更加简单，不需要显式构造对象
2. insert也可以对右值进行操作，因此二者并无效率上的差别。
3. 使用operator[] 显然更加直接，只不过这个可能会覆盖已有的键值对。
    我们有时候希望覆盖，有时候不希望覆盖，所以都是可能有用的。
*/

int main(){
    std::map<char, int> mymap;
    mymap.emplace('x', 100);
    mymap.insert(std::pair<char, int>('y',200));
    mymap['z'] = 100;

    std::cout << "mymap contains:" << std::endl;
    for(const auto& x : mymap){
        std::cout << "[ " << x.first << " : " << x.second << " ]" ;
        std::cout << std::endl;
    }
}