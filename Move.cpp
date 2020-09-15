#include <iostream>
class String
{
public:

    String()
    {
        std::cout << "Default " << this << " Created\n";
    }

    String(const char* string)
    {
        std::cout << this <<  " Created\n";
        m_Size = strlen(string) + 1; //Counting NULL
        m_Data = new char[m_Size];
        std::memcpy(&m_Data, &string, m_Size);
    }

    String(const String& other)
    {
        std::cout << "Copied\n";
        m_Size = other.m_Size;
        m_Data = new char[m_Size];
        std::memcpy(&m_Data, &other.m_Data, m_Size);
    }

    String(String&& other) noexcept
    {
        std::cout << "construct move\n";
        m_Size = other.m_Size;
        m_Data = other.m_Data;

        other.m_Size = 0;
        other.m_Data = nullptr;
    }

    String& operator=(String&& other) noexcept
    {
        std::cout << "Moved!!\n";
        if (this != &other)
        {
            delete[] m_Data;

            m_Size = other.m_Size;
            m_Data = other.m_Data;

            other.m_Size = 0;
            other.m_Data = nullptr;
        }
        return *this;
    }

    ~String()
    {
        std::cout << this << " Destoryed\n!";
        delete[] m_Data;
    }

    void Print()
    {
        for (uint32_t i = 0; i < m_Size; i++)
        {
            std::cout << m_Data[i];
        }
        std::cout<< "\n";
    }

private:
    const char* m_Data;
    uint32_t m_Size;
};

int main()
{
    String apple = "Apple";
    String dest = std::move(apple);
    apple.Print();
    dest.Print();

    // dest = std::move(apple);


    // String apple = "Apple";
    // String dest;
    // apple.Print();
    // dest.Print();

    // dest = std::move(apple);

    // apple.Print();
    // dest.Print();
}
