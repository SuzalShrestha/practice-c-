#include <iostream>
using namespace std;
class base
{
public:
    virtual void display()
    {
        cout << "Display of base" << endl;
    }
};
class derived : public base
{
public:
    void display()
    {
        cout << "Display of derived" << endl;
    }
};
int main()
{
    base b;
    derived d;
    base *ptr;
    ptr = &d;
    ptr->display();
    ptr = &b;
    ptr->display();
    return 0;
}