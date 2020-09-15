// #include <iostream>

/*
// issue too many codes tied to input type.
void print(int value){
    std::cout << value << std::endl;
}

void print(std::string value){
    std::cout << value << std::endl;
}

void print(float value){
    std::cout << value << std::endl;
}
*/

template <typename T>
void print(T value){
    std::cout << value << std::endl;
}

int main(){
    print(1);
    print("123");
    print(1.02f);
}

#include <iostream>

template <typename T, int N>
class Array{
private:
    T m_array[N];
public:
    int getSize() const{ return N; }
};
int main(){
    Array<int, 5> array;
    std::cout << array.getSize() << std::endl;
}
