#include <iostream>
void PrintString(const std::string& name)
{
    std::cout << &name << std::endl;
    std::cout << name << std::endl;
}

int main()
{
    std::string name = std::string("Kevin") + " Hello!";
    std::cout << &name << std::endl;
    // std::cout << name << std::endl;
    bool contains = name.find("on") != std::string::npos;
    // std::cout << contains << std::endl;
    PrintString(name);
}
