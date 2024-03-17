#include <iostream>
using namespace std;
class area
{
    int a, b, c;

public:
    area(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
        if (a + b <= c || b + c <= a || c + a <= b)
        {
            cout << "Invalid sides " << a << " " << b << " " << c << endl;
            throw "Invalid sides";
        }
    }
    void display()
    {
        cout << "Area is: " << 0.5 * a * b << endl;
    }
};
int main()
{
    try
    {
        area a(3, 4, 5);
        a.display();
        area b(3, 4, 8);
        b.display();
    }
    catch (const char *s)
    {
        cout << s << endl;
    }
    return 0;
}