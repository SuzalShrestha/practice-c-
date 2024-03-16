#include <iostream>
using namespace std;
class space
{
    int x, y, z;

public:
    space(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
        cout << "z: " << z << endl;
    }
    friend void operator--(space);
};
void operator--(space s1)
{
    s1.x = -s1.x;
    s1.y = -s1.y;
    s1.z = -s1.z;
}
int main()
{
    space s(10, 20, 30);
    s.display();
    --s;
    cout << "After decrementing" << endl;
    s.display();
    return 0;
}