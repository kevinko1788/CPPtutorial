#include <iostream>

class SoSimple{
private:
    static int simpleCount;
public:
    SoSimple(){
        simpleCount++;
        std::cout << "SimpleCount " << simpleCount << std::endl;
    }
};
int SoSimple::simpleCount = 0;

class SoComplex{
private:
    static int complexCount;
public:
    SoComplex(){
        complexCount++;
        std::cout << "ComplexCount " << complexCount << std::endl;
    }
    SoComplex(SoComplex &copy){
        complexCount++;
        std::cout << "Copy complexCount " << complexCount << std::endl;
    }
};
int SoComplex::complexCount = 0;
int main(){
    SoSimple sim1;
    SoSimple sim2;

    SoComplex comp1;
    SoComplex comp2 = comp1;
    SoComplex();
}
