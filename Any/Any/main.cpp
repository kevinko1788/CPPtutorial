//
//  main.cpp
//  Any
//
//  Created by Kevin Ko on 9/9/20.
//  Copyright © 2020 Kevin Ko. All rights reserved.
//

#include <iostream>
#include <string>
#include <any>

int main()
{
    std::any data;
    data = 2.0f;
    data = 2;

    data = std::string("kevin");
    
//    std::cout << sizeof(std::string) << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(data)<< std::endl;
    
}
