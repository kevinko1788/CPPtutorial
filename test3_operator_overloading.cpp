#include <iostream>

class Point{
private:
    int m_x, m_y;
public:
    Point(int x=0, int y=0) : m_x(x), m_y(y) {}

    Point operator+(const Point& ref) const {
        return Point(m_x + ref.m_x, m_y + ref.m_y);
    }
    void showPoints() const {
        std::cout << m_x <<", " << m_y << std::endl;
    }
};

int main(){
    Point p1(1,2);
    Point p2(5,10);
    Point p3 = p1 + p2;
    p2.showPoints();
    p1.showPoints();
    p3.showPoints();
}
