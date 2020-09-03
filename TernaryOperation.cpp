#include <iostream>

int main()
{
    int s_Level = 5;
    int s_Speed = 2;

    s_Speed = s_Level > 5? s_Level > 10? 15 : 10 : 5;

    std::cout << s_Speed << std::endl;
}
