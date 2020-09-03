#include <iostream>
class Entity
{
    private:
        int x,y;
    public:
        Entity()
        {
            x = 0.0f;
            y = 0.0f;
            std::cout << "Create Entity" << std::endl;
        }

        void move(int mx, int my)
        {
            x += mx;
            y += my;
        }

        ~Entity()
        {
            std::cout << "Destoryed Entity" << std::endl;
        }
};

class Player: public Entity
{
    public:
        const char* Name;
        Player()
        {
            Name = "asdf";
        }
        void PrintName()
        {
            std::cout << Name << std::endl;
        }
};

int main()
{
    Player player;
    player.move(5,5);
    player.PrintName();

}
