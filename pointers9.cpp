#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int *ptr1, **ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;
    cout << "address of a " << ptr1 << endl;
    cout << "address of p1 " << ptr2 << endl;
    cout << "address of a " << ptr1++ << endl;
    cout << "address of p1 " << ++ptr1 << endl;
}