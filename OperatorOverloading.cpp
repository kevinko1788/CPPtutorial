#include <iostream>
#include <string>
struct Vector2
{
    float m_X, m_Y;
    Vector2(float x, float y)
        : m_X(x), m_Y(y){}
    Vector2 Add(const Vector2& other) const
    {
        return Vector2(m_X+other.m_X, m_Y+other.m_Y);
    }

    Vector2 operator+(const Vector2& other) const
    {
        return Add(other);
    }

    Vector2 Multiply(const Vector2& other) const
    {
        return Vector2(m_X*other.m_X, m_Y*other.m_Y);
    }

    Vector2 operator*(const Vector2& other) const
    {
        return Multiply(other);
    }

};

// << operator overloading with Vector2 object
std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
    stream << other.m_X << ", " << other.m_Y;
    return stream;
}

int main()
{
    Vector2 position = Vector2(0.5f, 1.2f);
    Vector2 speed = Vector2(0.3f, 2.2f);
    Vector2 powerup = Vector2(1.1f, 1.1f);
    Vector2 result = position+ speed * powerup;

    std::cout << result << std::endl;
}
