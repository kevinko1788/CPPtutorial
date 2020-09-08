#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "Base Constructor \n";
    }
    virtual ~Base()
    {
        std::cout << "Base Desconstructor \n";
    }
};

class Derive : public Base
{
public:
    Derive()
    {
        std::cout << "Derive Constructor \n";
    }
    ~Derive()
    {
        std::cout << "Derive Destructor \n";
    }
};

int main()
{
    Base* derive = new Derive();
    delete derive;
}
