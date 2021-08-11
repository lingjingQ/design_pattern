#include <iostream>

template <typename T>
bool compare(const T& a, const T& b){
    return a < b;
}

template <unsigned N, unsigned M>
bool compare2(const char (&p1)[N], const char (&p2)[M]) {
    int i=0, j=0;
    for(; i<N && j<M; i++, j++) {
        std::cout << p1[i] << '\t' << p2[j] << std::endl;
        if(p1[i] < p2[j]){ 
            return true;
        }else if(p1[i] > p2[j]){
            return false;
        }else{
            ;
        }
    }
    if(i == N && j == M) return false;
    if(i<N) return false;
    return true;
}

int main() {
    // using namespace std;
    // cout << "hello_template" << endl;
    std::cout << compare<int>(1,3) << std::endl;
    std::cout << compare<std::string>("a","b") << std::endl;
    std::cout << compare('a', 'b') << std::endl;
    std::cout << "==============" << std::endl;

    std::cout << compare2("a", "ab") << std::endl; // 有的函数，看起来就是个普通函数，其实是个模板。
}