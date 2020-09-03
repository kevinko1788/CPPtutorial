#include <iostream>
class Example
{
public:
    Example()
    {
        std::cout << "created Example class" << std::endl;
    }
    Example(int i)
    {
        std::cout << "created Example class with " << i << "!" << std::endl;
    }
};
class Entity
{
private:
    std::string m_Name;
    Example m_example;

public:
    //Member initializer
    Entity()
        :m_example(8)
    {
        m_Name = "UnKnown";
    }
    Entity(const std::string& name)
        :m_example(9)
    {
        m_Name = name;
    }
    const std::string& GetName() const
    {
        return m_Name;
    }
};

int main()
{
    Entity e1;
    std::cout << "==============" << std::endl;
    // Entity e2("kevin");
    // std::cout << e.GetName() << std::endl;
}
