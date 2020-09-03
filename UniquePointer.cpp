#include <iostream>
#include <memory>

class Entity
{
private:
    int x,y;
public:
    Entity()
    {
        std::cout << "Created Entity" << std::endl;
    }

    ~Entity()
    {
        std::cout << "Destroyed Entity" << std::endl;
    }

    void Print()
    {
        //Print
    }

};

int main()
{
    {
        // ensure unique exception
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();
        entity -> Print();
    }

}
