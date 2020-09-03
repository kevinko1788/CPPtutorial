#include <iostream>

class Entity
{
private:
    int x,y;
public:
    Entity()
    {
        std::cout << "Entity Created" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Entity Destroyed" << std::endl;
    }
};

class ScopedPtr
{
private:
    Entity *m_e;
public:
    ScopedPtr(Entity *e)
        :m_e(e)
    {

    }
    ~ScopedPtr()
    {
        delete m_e;
    }

};

int main()
{
    {
        ScopedPtr e = new Entity();
    }
}
