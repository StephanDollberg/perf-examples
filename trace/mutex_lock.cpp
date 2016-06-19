#include <chrono>
#include <mutex>
#include <thread>

int main() {
    std::mutex mut;

    std::thread t([&] {
        std::lock_guard<std::mutex> lock(mut);
        std::this_thread::sleep_for(std::chrono::seconds(5));
    });

    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::lock_guard<std::mutex> lock(mut);

    t.join();
}
