#include <iostream>
#include <vector>
template<typename T>

class Vector
{

public:
    Vector()
    {
        ReAlloc(2);
    }
    ~Vector()
    {
        std::cout << "End of Vector" << std::endl;
        // delete[] m_Data;
    }
    void PushBack(const T& value)
    {
        if (m_Size == m_Capacity)
            ReAlloc(m_Capacity + m_Capacity / 2);
        m_Data[m_Size++] = value;
    }

    void PushBack(T&& value)
    {
        std::cout << "Move Vector3 in Vector" << std::endl;
        if (m_Size == m_Capacity)
            ReAlloc(m_Capacity + m_Capacity / 2);
        m_Data[m_Size++] = std::move(value);
    }
    template<typename... Args>
    T& EmplaceBack(Args&&... args)
    {
        if (m_Size == m_Capacity)
            ReAlloc(m_Capacity + m_Capacity / 2);
        m_Data[m_Size] = T(std::forward<Args>(args)...);
        return m_Data[m_Size++];
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
    void PopBack()
    {
        if (m_Size > 0)
        {
            m_Size--;
            m_Data[m_Size].~T();
        }
    }
    void Clear()
    {
        for (size_t i = 0; i < Size(); i++)
        {
            m_Data[i].~T();
        }
        m_Size = 0;
    }

    size_t Size() const
    {
        return m_Size;
    }
private:
    void ReAlloc(size_t newCapacity)
    {
        // std::cout << "Vector resizing to: " << newCapacity << "\n";
        T* newBlock = new T[newCapacity];

        if (newCapacity < m_Size)
            m_Size = newCapacity;

        for (size_t i = 0; i < m_Size; i++)
            newBlock[i] = std::move(m_Data[i]);

        delete[] m_Data;
        m_Data = newBlock;
        m_Capacity = newCapacity;
    }
private:
    T* m_Data = nullptr;
    size_t m_Size = 0;
    size_t m_Capacity = 0;

};
struct Vector3
{
    float x = 0, y = 0, z = 0;
    Vector3(){}
    Vector3(float scalar)
        : x(scalar),y(scalar),z(scalar) {}
    Vector3(float x, float y, float z)
        : x(x), y(y), z(z) {}
    Vector3(const Vector3& other)
        : x(other.x), y(other.y), z(other.z)
    {
        std::cout << "Copy Vector3 cosntructor\n";
    }

    Vector3(const Vector3&& other)
        : x(other.x), y(other.y), z(other.z)
    {
        std::cout << "Move Vector3\n";
    }
    Vector3& operator=(const Vector3& other)
    {
        std::cout << "Copy Vector3 operator\n";
        x = other.x;
        y = other.y;
        z = other.z;
        return *this;
    }
    Vector3& operator=(Vector3&& other)
    {
        std::cout << "Move Vector3\n";
        x = other.x;
        y = other.y;
        z = other.z;
        return *this;
    }
    ~Vector3()
    {
        std::cout << "Destroy Vector3\n";
    }
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
void Print(const Vector<Vector3> vector)
{
    for (size_t i = 0; i < vector.Size(); i++)
    {
        std::cout << vector[i].x <<", " << vector[i].y << ", " << vector[i].z << "\n";
    }
    std::cout << "====================\n";
}

int main()
{
    vector<int> v;
    
    Vector<Vector3> vector;
    // vector.PushBack(Vector3{1.0f});
    // vector.PushBack(Vector3{2,3,4});
    // vector.PushBack(Vector3());
    vector.EmplaceBack(1.0f);
    vector.EmplaceBack(2,3,4);
    vector.EmplaceBack();
    vector.EmplaceBack(2,3,4);
    Print(vector);
    vector.PopBack();
    vector.PopBack();
    Print(vector);
    vector.Clear();
    Print(vector);
    vector.EmplaceBack();
    vector.EmplaceBack(2,3,4);

    Print(vector);

}
