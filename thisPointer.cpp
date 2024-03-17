#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void display()
    {
        cout << a << endl;
    }

    A(int x = 100)
    {
        a = x;
    }
    A &greater(A &x)
    {
        if (x.a > a)
        {
            return x;
        }
        else
        {
            return *this;
        }
    }
};
int main()
{
    A a1, a2(2000);
    a1.display();
    a2.display();
    A a3 = a1.greater(a2);
    a3.display();
    return 0;
}