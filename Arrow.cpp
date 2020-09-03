#include <iostream>

class Entity{
public:
    int x;
public:
    void print(){
        std::cout << "Hello World" << std::endl;
    }
};

class ScopedPtr{
private:
    Entity* m_e;
public:
    ScopedPtr(Entity* e) : m_e(e) {}

    Entity* operator->(){
        return m_e;
    }
};

int main(){
    ScopedPtr sEntity = new Entity();
    sEntity -> print();
}
