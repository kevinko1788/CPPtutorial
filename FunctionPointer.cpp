#include <iostream>
#include <string>
#include <vector>

void foreach(std::vector<int>& values, void(*func)(int)){
    for (int value: values){
        func(value);
    }
}

int main(){
    std::vector<int> values = {1,2,3,4,5};
    // adding lambda function in arguement
    foreach(values, [](int value){std::cout<< value << std::endl;});
}


// #include <iostream>
// #include <string>
// #include <vector>

// void printValue(int value){
//     std::cout << value << std::endl;
// }

// void foreach(std::vector<int>& values, void(*func)(int)){
//     for (int value: values){
//         func(value);
//     }
// }

// int main(){
//     std::vector<int> values = {1,2,3,4,5};

//     foreach(values, printValue);
// }

// #include <iostream>
// #include <string>

// void helloWorld(int a){
//     std::cout << "Hello World value: " << a << std::endl;
// }
// int main(){
//     //1) hard way
//     // return type / variable name / argument
//     // void(*function)() = helloWorld;
//     // 2) auto
//     // auto function = helloWorld;
//     //3) typedef way
//     typedef void(*helloWorldFunction)(int);
//     helloWorldFunction function = helloWorld;
//     function(8);
//     function(0);

// }
