#include <iostream>
#include <string>
class Entity
{
public:
    virtual std::string GetName(){return "Entity";}
};

class Player: public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& Name)
    {
        m_Name = Name;
    }

    std::string GetName() override {return m_Name;}

};

void PrintName(Entity* entity)
{
    std::cout << entity -> GetName() << std::endl;
}

int main()
{
    Entity* e = new Entity();
    Player* p = new Player("Kevin");

    PrintName(e);
    PrintName(p);
}
