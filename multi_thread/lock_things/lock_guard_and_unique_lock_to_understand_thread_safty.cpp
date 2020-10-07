#include <thread>
#include <mutex>
#include <iostream>
#include <unistd.h>

int i = 0;
std::mutex i_mutex;

void increament(){
    // std::lock_guard<std::mutex> lock(i_mutex);
    for(int j=0; j<1000; j++){
        std::unique_lock<std::mutex> lock(i_mutex);// same as lock_guard
        int t = i;
        usleep(10);
        i = t+1;
        std::cout << std::this_thread::get_id() <<": " << i <<std::endl; 
    }
}

int main(){
    std::cout << "main: " << i << std::endl;

    std::thread t1(increament);
    std::thread t2(increament);

    t1.join();
    t2.join();

    std::cout << "main: " << i << std::endl;
}