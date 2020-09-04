#include <iostream>
#include <thread>

static bool s_Finished = false;
void doWork(){
    using namespace std::literals::chrono_literals;
    std::cout << "Worker started id: " << std::this_thread::get_id() << std::endl;
    while (!s_Finished){
        std::cout << "Working" << std::endl;
        std::this_thread::sleep_for(1s);
    }
}

int main(){
    std::thread worker(doWork);

    std::cin.get();
    s_Finished = true;

    worker.join();
    std::cout << "Worker terminated id: " << std::this_thread::get_id() << std::endl;

    std::cin.get();

}
