#include <iostream>

class Entity
{
private:
    std::string m_Name;
    mutable int m_DebugCount = 0;
public:
    std::string& GetName() const
    {
        m_DebugCount++;
        return m_Name;
    }

};
int main()
{
    const Entity e;
    e.GetName();
}
