#include <iostream>
#include <string>
#include <vector>

int main(){

    std::vector<std::string> strings;
    strings.push_back("Apple");
    strings.push_back("Oranges");

    for (auto& string:strings){
        std::cout << string << std::endl;
    }

}
