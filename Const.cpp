#include <iostream>
class Entity
{
private:
    int m_X, m_Y;
public:
    const int GetX() const
    {
        // std::cout << &m_X << std::endl;
        return m_X;
    }
    void SetX(int x)
    {
        m_X = x;
    }

};

void PrintEntity(const Entity& e)
{
    std::cout << e.GetX()  << std::endl;
}

int main()
{
    Entity e;
    PrintEntity(e);
}
