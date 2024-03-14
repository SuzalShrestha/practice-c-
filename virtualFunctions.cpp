#include <iostream>
using namespace std;
class Base
{
public:
    void display()
    {
        cout << "\n displays base class";
    }
    void virtual show()
    {
        cout << "\n shows of base class\n";
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "\ndisplays derived class";
    }
    void show()
    {
        cout << "\n shows of derived class";
    }
};
int main()
{
    Base base;
    Derived derived;
    Base *bptr;
    bptr = &base;
    cout << "\n bptr points to base";
    bptr->display();
    bptr->show();
    cout << "\n bptr points to derived";
    bptr = &derived;
    bptr->display();
    bptr->show();
    return 0;
}