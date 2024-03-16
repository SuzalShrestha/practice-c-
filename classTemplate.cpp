#include <iostream>
using namespace std;
template <class T1 = int, class T2 = int>
class Comp
{
    T1 real;
    T2 imag;

public:
    Comp(T1 a, T2 b)
    {
        real = a;
        imag = b;
    }
    void show()
    {
        cout << real << " +j" << imag << endl;
    }
};
class vectors : public Complex
{
    T1 comp;

public:
    vectors(int a, int b)
    {
        Complex temp(a, b);
        comp = temp;
    }
    void display()
    {
        comp.show();
    }
};
int main()
{
    Comp<int, float> c1(3, 4.4);
    Comp<float, int> c2(4.4, 4);
    c1.show();
    c2.show();
    vectors v1(3, 1);
    v1.display();
    return 0;
}