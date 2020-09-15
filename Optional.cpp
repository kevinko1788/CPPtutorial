#include <iostream>
#include <fstream>
#include <optional>

std::optional<std::string> ReadFromFileAsString(const std::string& filepath)
{
    std::ifstream stream(filepath);
    if (stream)
    {
        std::string result;
        // read from file
        stream.close();
        return result;
    }
    return {};
}

int main()
{
    std::optional<std::string> data = ReadFromFileAsString("data.txt");
    // std::string value = data.value_or("file not present");
    // std::cout << value << std::endl;
    if (data)
    {
        std::cout << "file read" << std::endl;
    }
    else
    {
        std::cout << " File could not be opened" << std::endl;
    }
}
