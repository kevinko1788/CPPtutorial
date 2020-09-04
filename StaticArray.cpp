#include <iostream>
#include <array>

template <unsigned long SIZE>
void print(const std::array<int,SIZE> d){
    for (int i =0; i<SIZE; i++ ){
        std::cout << d[i] << std::endl;
    }

}

int main(){

    std::array<int, 5> data;
    data[0] = 1;
    data[1] = 3;
    data[2] = 4;
    print(data);
}
