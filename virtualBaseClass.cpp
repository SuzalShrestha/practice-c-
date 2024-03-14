#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void dispA()
    {
        a = 10;
        cout << a << endl;
    }
};
class B : public virtual A
{
    int b;

public:
    void dispB()
    {
        b = 20;
        cout << b << endl;
    }
};
class C : virtual public A
{
    int c;

public:
    void dispC()
    {
        c = 30;
        cout << c << endl;
    }
};
class D : public B, public C
{
    int d;

public:
    void dispD()
    {
        d = 40;
        cout << d << endl;
    }
};
int main()
{
    D num;
    num.dispA();
    num.dispB();
    num.dispC();
    num.dispD();
    return 0;
}