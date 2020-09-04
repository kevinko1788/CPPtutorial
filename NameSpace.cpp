#include <iostream>
#include <string>
namespace apple{
    namespace function{
        void print(const std::string& s){
        std::cout<< s << std::endl;
        }
    }

}
namespace orange{
    void print(const char* s){
        std::string temp = s;
        std::reverse(temp.begin(), temp.end());
        std::cout<< temp << std::endl;
    }
}
namespace af = apple::function;
using namespace orange;
int main(){
    af::print("Hello World!");
    // orange::print("Hello World!");
}
