#include <iostream>
using namespace std;
class B;
class A
{
private:
    int a;

public:
    void setdata(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "Value of a: " << a << endl;
    }
    friend void add(A, B);
};
class B
{
    int b;

public:
    void setdata(int y)
    {
        b = y;
    }
    void display()
    {
        cout << "Value of b: " << b << endl;
    }
    friend void add(A, B);
};
void add(A obj1, B obj2)
{
    cout << "Sum: " << obj1.a + obj2.b << endl;
    cout << "A" << obj1.a << endl;
    cout << "B" << obj2.b << endl;
}
int main()
{
    A obj1;
    B obj2;
    obj1.setdata(3);
    obj2.setdata(5);
    obj1.display();
    obj2.display();
    add(obj1, obj2);
    obj1.display();
    obj2.display();
    return 0;
}