#include <iostream>
#include <string>

#define String std::string

class Entity
{
private:
    String m_Name;
public:
    Entity() : m_Name("UnKnown"){}
    Entity(const String& name) : m_Name(name){}

    const String& GetName() const { return m_Name; }
};
int main()
{
    Entity* e;
    {
        // created in heap
        Entity* entity = new Entity("Kevin");
        e = entity;
        std::cout << entity->GetName() << std::endl;
    }
    std::cout << (*e).GetName() << std::endl;
}
