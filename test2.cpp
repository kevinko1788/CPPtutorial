#include <iostream>

class Drived;
class Base{
private:
    friend class Derived;
    int num1;
protected:
    int num2;
public:
    int num3;
};

class Derived : private Base{};

class DDerived : public Derived{
public:
    void showDeriveMember(){
        std::cout << num3 << "\n";
        // std::cout << num2 << "\n";
    }
};
int main(){
    DDerived dd;
    dd.showDeriveMember();
}
