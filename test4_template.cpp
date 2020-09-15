#include <iostream>

template<typename T>
void print(T value){
    std::cout << value << std::endl;
}

int main(){
    print<int>(1);
    print<std::string>("123");
}
