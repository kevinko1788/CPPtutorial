#include <iostream>
#include <string>

class Printable
{
public:
    virtual std::string GetClass() = 0;
};

class Entity: public Printable
{
public:
    virtual std::string GetName() {return "Entity";}
    std::string GetClass() override {return "Entity";}
};

class Player: public Entity//, Printable
{
private:
    std::string m_Name;
public:
    Player(const std::string& Name)
    {
        m_Name = Name;
    }
    std::string GetName() override {return m_Name;}
    std::string GetClass() override {return "Player";}
};

void PrintName(Entity* entity)
{
    std::cout << entity -> GetName() << std::endl;
}

class A: public Printable
{
    virtual std::string GetClass() override {return "A";}
};

void Print(Printable* obj)
{
    std::cout << obj -> GetClass() << std::endl;
}


int main()
{
    Entity* e = new Entity();
    Player* p = new Player("Kevin");

    Print(e);
    Print(p);
    Print(new A()); //memory leak
}
