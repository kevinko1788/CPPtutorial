#include <iostream>
#include <chrono>
struct Timer{
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> duration;
    Timer(){
        start = std::chrono::high_resolution_clock::now();
    }
    ~Timer(){
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;
        float ms = duration.count() * 1000;
        std::cout << ms << "ms\n";
    }
};
int main(){

    //2D array performance test
    // 1. allocate memory
    // 2. assign values
    // 3. delete
    {
        Timer time;
        int** a2d = new int*[5];
        for (int i = 0; i < 5; i++){
            a2d[i] = new int[5];
        }

        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                a2d[i][j] = 2;
            }
        }
        //deleting 2D
        for (int i = 0; i < 5; i++){
            delete[] a2d[i];
        }
        delete[] a2d;
    }


    // make it 1D
    {
        Timer time;
        int* array = new int[5 * 5];

        for (int i = 0; i < 5; i++){
            for (int j =0; j < 5; j++){
                array[j + i * 5] = 2;
            }
        }
        //delete 1D array
        delete[] array;
    }
}
