#include <iostream>
#include <vector>
class Dog{
private:
    std::string _name;
public:
    Dog(std::string name = "wangcai"):_name(name){
    }
    void bark(){
        std::cout << "wangwang~" << std::endl;
    }
};

void bubbleSort(std::vector<int>& arr){
    for(int i=1; i<arr.size(); i++){
        for(int j=0; j<arr.size()-i; j++){
            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    std::vector<int> arr = {1,2,5,3,4,7,6};
    bubbleSort(arr);
    for(const auto& i : arr){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}