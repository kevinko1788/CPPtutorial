#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::vector<int> values = {1,5,4,2,3};
    //iterator
    auto it = std::find_if(values.begin(), values.end(), [](int value) {return value > 3;});
    std::cout << *it << std::endl;

}


// #include <iostream>
// #include <string>
// #include <vector>
// #include <functional>

// void foreach(std::vector<int>& values, const std::function<void(int)>& func){
//     for (int value: values){
//         func(value);
//     }
// }

// int main(){
//     std::vector<int> values = {1,2,3,4,5};
//     int a = 5;
//     // adding lambda function in arguement
//     // & reference
//     // = copy
//     //https://en.cppreference.com/w/cpp/language/lambda
//     foreach(values, [&](int value){std::cout<< a << std::endl;});
// }
