#include <iostream>
using namespace std;
class Polygon
{
protected:
    int length, height;

public:
    Polygon(int l, int h)
    {
        length = l;
        height = h;
    }
    virtual int area() = 0;
};
class Triangle : public Polygon
{
public:
    Triangle(int l, int h) : Polygon(l, h) {}
    int area()
    {
        return length * height / 2;
    }
};
class Rectangle : public Polygon
{
public:
    Rectangle(int l, int h) : Polygon(l, h) {}
    int area()
    {
        return length * height;
    }
};
int main()
{
    Polygon *ptr;
    Triangle t(2, 3);
    Rectangle r(2, 3);
    ptr = &t;
    cout << "Area of triangle: " << ptr->area() << endl;
    ptr = &r;
    cout << "Area of rectangle: " << ptr->area() << endl;
    return 0;
}