#include <iostream>
#include <string>


class Entity
{
public:
    int x, y;

    Entity(int x, int y)
    {
        this->x = x;
        this->y = y;
        PrintEntity(*this);

    }
    int GetX() const
    {
        const Entity& e = *this;
        return e.x;
    }
};

void PrintEntity(const Entity& e) const
{
    //print
    std::cout << "PrintEntity Called" << std::endl;
}

int main()
{
    Entity e(1,2);
    std::cout << e.GetX() << std::endl;
}
