#include <iostream>
#include <string>

#if PR_DEBUG == 1
//#ifdef PR_DEBUG
#define LOG(x) std::cout << x << std::endl;
#elif defined(PR_RELEASE)
// #else
#define LOG(x)
#else
#define LOG(x)
#endif

int main(){
    LOG("Hello");
}
