#include <iostream>
#include <chrono>
#include <thread>

struct Timer{
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> duration;

    Timer(){
        start = std::chrono::high_resolution_clock::now();
    }
    ~Timer(){
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;
        float ms = duration.count() * 1000.0f;
        std::cout << ms << "ms" << std::endl;
    }
};

void function(){
    Timer timer;
    for (int i = 0; i < 100; i++)
        std::cout << "Hello World!" << std::endl;
}

int main(){
    function();
}




// int main(){
//     Timer timer;
//     using namespace std::literals::chrono_literals;
//     // auto start = std::chrono::high_resolution_clock::now();
//     std::this_thread::sleep_for(1s);
//     // auto end = std::chrono::high_resolution_clock::now();

//     // std::chrono::duration<float> duration = end - start;
//     // std::cout<< duration.count() << "s" <<  std::endl;
// }
