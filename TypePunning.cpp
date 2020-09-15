#include <iostream>

struct Entity
{
    int x, y;
    int* GetPositions()
    {
        return &x;
    }
};
int main()
{
    Entity e = {5,10};
    // int* position = &e.x;
    int* position = e.GetPositions();
    // std::cout << e.x << ", "<< e.y << std::endl;
    int y = *(int*)((char*)&e.x+4);
    // std::cout << position[0] << ", " << position[1] << std::endl;
    std::cout << y << std::endl;
}
