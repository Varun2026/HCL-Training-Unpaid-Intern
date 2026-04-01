#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>
#include <chrono>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void waiter() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, []{ return ready; });
    std::cout << "Notified" << std::endl;
}

void notifier() {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }
    cv.notify_one();
}

int main() {
    std::thread t1(waiter);
    std::thread t2(notifier);
    t1.join();
    t2.join();
    return 0;
}