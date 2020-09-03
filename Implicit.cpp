#include <iostream>
class Entity
{
private:
    std::string m_Name;
    int m_Age;
public:
    //explicit
    explicit Entity(const char* name)
        : m_Name(name), m_Age(-1) {}
    //explicit
    explicit Entity(int age)
        : m_Name("UnKnown"), m_Age(age) {}
};

void PrintEntity(const Entity& e)
{
    //print function
}

int main()
{
    PrintEntity(22);
    std::cout << "int called" << std::endl;
    PrintEntity("Kevin");
    std::cout << "string called" << std::endl;
}
