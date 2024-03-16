#include <iostream>
using namespace std;
class space
{
    int x, y, z;

public:
    void getS(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display(void)
    {
        cout << "x is " << x << endl;
        cout << "x is " << y << endl;
        cout << "x is " << z << endl;
    }
    void operator--()
    {
        x = x - 1;
        y = y - 1;
        z = z - 1;
    }
};
int main()
{
    space s1;
    s1.getS(1000, 10000, 100000);
    s1.display();
    --s1;
    s1.display();
    return 0;
}