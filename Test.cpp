#include <iostream>
void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
int main(){
    int a = 5;
    int b = 6;

    std::cout << a << ", " << b << std::endl;
    //swap(&a, &b);
    int *pA = &a;
    int *pB = &b;
    int *pZ = pA;
    pA = pB;
    pB = pZ;
    std::cout << *pA<<", "<< *pB << std::endl;
    // std::cout <<  << std::endl;
    std::cout << a << ", " << b << std::endl;

}
