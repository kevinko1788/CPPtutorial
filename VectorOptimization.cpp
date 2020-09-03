#include <iostream>
#include <string>
#include <vector>

struct Vertex{
    float x,y,z;

    Vertex(float x, float y, float z) : x(x), y(y), z(z){

    }

    Vertex(const Vertex& vertex) : x(vertex.x), y(vertex.y), z(vertex.z) {
        std::cout << "Vertex Copied" << std::endl;
    }
};

int main(){
    // // below will construct 3 Vertex elements
    // std::vector<Vertex> vertices(3);
    // below will reserve memory space for 3 Vertex elements but does not construct Vertex
    std::vector<Vertex> vertices;
    vertices.reserve(3);

    //instead of using push_back which creates object in main function then moves to vector class
    vertices.emplace_back(1,2,3);
    vertices.emplace_back(4,5,6);
    vertices.emplace_back(7,8,9);

    // vertices.push_back(Vertex(1,2,3));
    // vertices.push_back(Vertex(4,5,6));
    // vertices.push_back(Vertex(7,8,9));



    // issue: 3 copies to push_back 2 elements
    // std::vector<Vertex> vertices;
    // std::cout << "1" << std::endl;
    // vertices.push_back({1,2,3});
    // std::cout << "2" << std::endl;
    // vertices.push_back({4,5,6});
    // std::cout << "3" << std::endl;
}
