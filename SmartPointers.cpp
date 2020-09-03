#include <iostream>
#include <memory>

class Entity
{
public:
    Entity()
    {
        std::cout << "Created" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Destroyed" << std::endl;
    }
};

// unique ptr
// int main()
// {
//     {
//         {
//             std::unique_ptr<Entity> uEntity = std::make_unique<Entity>();
//             std::cout<< "first scope" << std::endl;
//         }
//         std::cout<< "second scope" << std::endl;
//     }
// }

// shared ptr
// int main()
// {
//     {
//         std::shared_ptr<Entity> e1;
//         {
//             // creates memory block to keep count of shared ptr references
//             std::shared_ptr<Entity> sEntity = std::make_shared<Entity>();
//             e1 = sEntity;
//             std::cout<< "first scope" << std::endl;
//         }
//         std::cout<< "second scope" << std::endl;
//     }
// }


//weak ptr
//same as shared but weak ptr will not increase ref count
int main()
{
    {
        std::weak_ptr<Entity> e1;
        {
            // creates memory block to keep count of shared ptr references
            std::shared_ptr<Entity> sEntity = std::make_shared<Entity>();
            e1 = sEntity;
            std::cout<< "first scope" << std::endl;
        }
        std::cout<< "second scope" << std::endl;
    }
}
