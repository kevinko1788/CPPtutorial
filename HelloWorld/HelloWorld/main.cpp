#include <iostream>
template<typename T, size_t S>
class Array
{
public:
    const size_t Size() const
    {
        return S;
    }
    
    T& operator[](size_t index) {return m_Data[index];}
    const T& operator[](size_t index) const {return m_Data[index];}
    
    const T* Data(){return m_Data;}
    
    const size_t TypeSize(){return sizeof(T);}
    
private:
    T m_Data[S];
};

int main()
{
    Array<int, 5> data;
    memset(&data[0], 0, data.Size() * data.TypeSize());

    for (size_t i = 0; i < data.Size(); i++)
        std::cout << data[i] << std::endl;
}
