#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void getData(int x)
    {
        a = x;
    }
    void dis()
    {
        A i = *this;
        cout << a << endl;
        cout << i.a << endl;
    }
};
int main()
{
    // A a;
    // A *ptr = &a;

    // ptr->dis(); // same as a.dis(); and can only access public member
    // (*ptr).dis();
    // A *ptr2 = new A;
    // A *ptr3 = new A[10]; // array of pointers
    // cout << ptr << endl;
    // cout << &a << endl;
    int i;
    A *ptr = new A[2];
    A *ptr1 = ptr;
    int x;
    for (i = 0; i < 2; i++)
    {
        cout << "Enter int for " << i + 1 << " item" << endl;
        cin >> x;
        ptr->getData(x);
        ptr++;
    }
    for (i = 0; i < 2; i++)
    {
        cout << "Item : " << i + 1 << endl;
        ptr1->dis();
        ptr1++;
    }

    return 0;
}