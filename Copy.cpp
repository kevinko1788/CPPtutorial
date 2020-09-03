#include <iostream>

class String
{
private:
    char *m_buffer;
    unsigned int m_size;
public:
    String(const char *string)
    {
        m_size = strlen(string);
        m_buffer = new char[m_size+1];
        memcpy(m_buffer, string, m_size);
        m_buffer[m_size] = 0;
    }

    String(const String& other)
        :m_size(other.m_size)
    {
        std::cout << "Copied" << std::endl;
        m_buffer = new char[m_size+1];
        memcpy(m_buffer,other.m_buffer, m_size + 1);
    }

    ~String()
    {
        delete[] m_buffer;
    }

    char& operator[](int index)
    {
        return m_buffer[index];
    }

    friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_buffer;
    return stream;
}

void PrintString(const String &string)
{
    std::cout << string << std::endl;
}

int main()
{
    String string = "Kevin";
    String second = string;
    second[3] = 'a';

    // std::cout << string << std::endl;
    // std::cout << second << std::endl;

    PrintString(string);
    PrintString(second);
}
