#include <iostream>
using namespace std;
template <typename T>
T swapit(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int a = 10, b = 20;
    swapit(a, b);
    cout << a << " " << b << endl;
    return 0;
}