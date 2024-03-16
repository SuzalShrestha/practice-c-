#include <iostream>
using namespace std;
class shape
{
protected:
    float length, breadth;

public:
    virtual void area() = 0;
    shape()
    {
        length = 0;
        breadth = 0;
    }
    shape(float l, float b)
    {
        length = l;
        breadth = b;
    }
};
class rectangle : public shape
{
public:
    rectangle()
    {
        length = 0;
        breadth = 0;
    }
    rectangle(float l, float b) : shape(l, b)
    {
    }
    void area()
    {
        cout << "Area of rectangle is " << length * breadth << endl;
    }
};
class triangle : public shape
{
public:
    triangle() {}
    triangle(float l, float b) : shape(l, b)
    {
    }
    void area()
    {
        cout << "Area of triangle is " << 0.5 * length * breadth << endl;
    }
};
int main()
{
    shape *bptr;
    rectangle r(10, 20);
    triangle t(10, 20);
    bptr = &r;
    bptr->area();
    bptr = &t;
    bptr->area();
    return 0;
}