#include <iostream>
class Entity
{
    public:
        Entity()
        {
            std::cout << "Create Entity: "<< std::endl;
        }
        ~Entity()
        {
            std::cout << "Remove Entity: " << std::endl;
        }
};
int main()
{
    Entity* entity = new Entity[50];
    delete[] entity;
}
