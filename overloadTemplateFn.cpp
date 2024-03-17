#include <iostream>
using namespace std;
template <class T>
void display(T a)
{
    cout << a << endl;
    cout << "This is 1 T" << endl;
}
template <class T, class T1>
void display(T a, T1 b)
{
    cout << a << endl;
    cout << b << endl;
    cout << "This is 2 T" << endl;
}
void display(int)
{
    cout << "This is int" << endl;
}
int main()
{
    display(1);
    display(1, 2);
    display(1.1);
    return 0;
}