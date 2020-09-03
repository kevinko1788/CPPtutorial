#include <iostream>
#define LOG(x) std::cout<< x << std::endl
int main()
{
    int example[5];
    //using pointer
    int* ptr = example;
    for (int i = 0; i < 5; i++)
    {
        example[i] = 2;
    }
    LOG(example[2]);
    //using pointer
    *(ptr+2) = 5;
    LOG(example[2]);
}
