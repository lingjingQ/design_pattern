#include <iostream>
#include <algorithm>
#include <vector>

bool function(int a, int b){
    return a >= b;
}


struct myPair{
    int i;
    int j;

    myPair(int ii=0, int jj=0):i(ii), j(jj){}
};

bool operator < (myPair& p1, myPair& p2){ // must be global function
    if(p1.i == p2.i) return p1.j <= p2.j;
    return p1.i < p2.i;
}

int main(){
    std::vector<int> arr{1,5,3,4,2};
    std::sort(arr.begin(), arr.end()); // increased by default
    for(const auto& x : arr){
        std::cout << x << " ";
    }
    std::cout << std::endl;



    std::vector<int> arr2{1,5,3,4,2};
    std::sort(arr2.begin(), arr2.end(), function);  // function to decrease
    for(const auto& x : arr2){
        std::cout << x << " " ;
    }
    std::cout << std::endl;

    std::vector<myPair> arrPair = {myPair(1,3), myPair(2,3), myPair(4,5), myPair(9,0), myPair(0,9)};
    std::sort(arrPair.begin(), arrPair.end());
    for(const auto& p : arrPair){
        std::cout << "(" << p.i << ", " << p.j << ")" << std::endl;
    }
}