#include <iostream>
using namespace std;
class test
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
    friend test add(test, test);
};
test add(test obj1, test obj2)
{
    test temp;
    temp.a = obj1.a + obj2.a;
    temp.b = obj1.b + obj2.b;
    return temp;
}
int main()
{
    test obj1, obj2, obj3;
    obj1.setdata(3, 4);
    obj2.setdata(5, 6);
    obj1.display();
    obj2.display();
    obj3 = add(obj1, obj2);
    obj3.display();
    return 0;
}
