#include <iostream>

class SoSimple{
private:
    static int objcnt;
public:
    SoSimple(){

    }
    static void IncreaseCounter(){
        objcnt++;
        std::cout << objcnt << std::endl;
    }
    const static int& GetCount(){
        return objcnt;
    }
};
int SoSimple::objcnt = 0;

int main(){
    SoSimple sim1;
    std::cout << SoSimple::GetCount() << std::endl;
    // SoSimple sim1;
    // sim1.IncreaseCounter();
    // SoSimple sim2;
    // sim2.IncreaseCounter();
    // sim2.IncreaseCounter();
}
