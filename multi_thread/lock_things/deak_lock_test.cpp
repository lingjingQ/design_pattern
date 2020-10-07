#include <mutex>
#include <thread>
#include <chrono>
#include <unistd.h>
 
struct Box {
    explicit Box(int num) : num_things{num} {}
 
    int num_things;
    std::mutex mtx;
};
/*
要点：
    1. 两个线程加锁的顺序不同
    2. 中间睡眠一段时间是为了让两个线程各自持有一个对方即将需要获取的锁
*/
void transfer1(Box &from, Box &to, int num)
{
    std::unique_lock<std::mutex> lock1(from.mtx);
    usleep(10000000);
    std::unique_lock<std::mutex> lock2(to.mtx);
 
    from.num_things -= num;
    to.num_things += num;
    // 'from.m' and 'to.m' mutexes unlocked in 'unique_lock' dtors
}

void transfer2(Box &from, Box &to, int num)
{
    std::unique_lock<std::mutex> lock1(to.mtx);
    usleep(10000000);
    std::unique_lock<std::mutex> lock2(from.mtx);
 
    from.num_things -= num;
    to.num_things += num;
    // 'from.m' and 'to.m' mutexes unlocked in 'unique_lock' dtors
}
 
int main()
{
    Box acc1(100);
    Box acc2(50);
 
    std::thread t1(transfer1, std::ref(acc1), std::ref(acc2), 10);
    std::thread t2(transfer2, std::ref(acc2), std::ref(acc1), 5);
 
    t1.join();
    t2.join();
}
