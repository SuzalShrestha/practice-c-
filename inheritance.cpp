#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void getA(int);
    int putA(void);
};
void A::getA(int x)
{
    a = x;
}
int A::putA(void)
{

    return a;
}
class B : public A
{
    int b, c;

public:
    void getB(int);
    int add(void);
    void display(void);
};
void B::getB(int y)
{
    b = y;
}
int B::add()
{
    c = putA() + b;
    return c;
}
void B::display()
{
    cout << "Value of a is " << putA() << endl;
    cout << "Value of b is " << b << endl;
    cout << "Sum of a and b is " << c << endl;
}
int main()
{
    B sum;
    sum.getA(10001);
    sum.getB(2000);
    sum.add();
    sum.display();
    return 0;
}
