#include <iostream>
#include <string>
#include <tuple>


std::tuple<std::string, int> CreatePerson()
{
    // std::string name = "Cherno";
    // int age = 24;
    // return this;
    return {"Kevin", 33};
}

int main()
{
    auto[name,age] = CreatePerson();
    std::cout << name << "\n";
    std::cout << age << "\n";
}
