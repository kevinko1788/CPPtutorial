#include <iostream>

class Entity
{
public:
    // make it polymorphic class type
    virtual void PrintName(){}
};

class Player : public Entity
{

};

class Enemy : public Entity
{

};

int main()
{
    Player* player = new Player();
    Entity* acutallyPlayer = new Player();
    Entity* actuallyEnemy = new Enemy();

    Player* dc0 = dynamic_cast<Player*>(actuallyEnemy);
    // std::cout << dc0 << std::endl;
    if (dc0)
    {

    }
    Player* dc1 = dynamic_cast<Player*>(acutallyPlayer);
    // std::cout << dc1 << std::endl;

}
