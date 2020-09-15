#include <iostream>
template<typename T>
class Vector
{

public:
    Vector()
    {
        ReAlloc(2);
    }
    void PushBack(const T& value)
    {
        if (m_Size == m_Capacity)
            ReAlloc(m_Capacity + m_Capacity / 2);
        m_Data[m_Size++] = value;
    }
    const T& operator[](size_t index) const
    {
        if(index >= m_Size)
        {
            //assert
        }
        return m_Data[index];
    }

    T& operator[](size_t index)
    {
        if(index >= m_Size)
        {
            //assert
        }
        return m_Data[index];
    }

    size_t Size() const
    {
        return m_Size;
    }
private:
    void ReAlloc(size_t newCapacity)
    {
        T* newBlock = new T[newCapacity];

        if (newCapacity < m_Size)
            m_Size = newCapacity;

        for (size_t i = 0; i < m_Size; i++)
            newBlock[i] = m_Data[i];

        delete[] m_Data;
        m_Data = newBlock;
        m_Capacity = newCapacity;
    }
private:
    T* m_Data = nullptr;
    size_t m_Size = 0;
    size_t m_Capacity = 0;

};

template <typename T>
void Print(const Vector<T>& vector)
{
    for (size_t i = 0; i < vector.Size(); i++)
    {
        std::cout << vector[i] << "\n";
    }
    std::cout << "====================\n";
}

int main()
{
    Vector<std::string> vector;

    vector.PushBack("Kevin");
    vector.PushBack("C++");
    vector.PushBack("Kevin");
    Print(vector);

}
