#include <mutex>
#include <thread>
#include <iostream>

struct Box {
    explicit Box(int num) : _num(num){}

    int _num;
    std::mutex mtx;
};


void transfer(Box& from, Box& to, int num){
    // don't actually take the locks yet
    std::unique_lock<std::mutex> lock1(from.mtx, std::defer_lock);
    std::unique_lock<std::mutex> lock2(to.mtx, std::defer_lock);

    // lock both unique_locks without deadlock
    std::lock(lock1, lock2);
    from._num -= num;
    from._num += num;

    // 'from.m' and 'to.m' mutexes unlocked in 'unique_lock' dtors
}

int main(){
    Box acc1(100);
    Box acc2(50);
    std::cout << acc1._num << std::endl;
    std::cout << acc2._num << std::endl;

    std::thread t1(transfer, std::ref(acc1), std::ref(acc2), 10);
    std::thread t2(transfer, std::ref(acc2), std::ref(acc1), 10);

    std::cout << acc1._num << std::endl;
    std::cout << acc2._num << std::endl;
    
    t1.join();
    t2.join();
}