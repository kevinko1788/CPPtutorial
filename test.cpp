#include <iostream>

struct Entity
{
    int x, y;

    void print()
    {
        std::cout << x << " "<< y << std::endl;
    }
};
int main()
{
    Entity e;
    e.x = 2;
    e.y = 3;

    e.print();
}
