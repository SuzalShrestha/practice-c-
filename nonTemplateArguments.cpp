#include <iostream>
using namespace std;
template <class T, int size>
class array
{
    T a[size];

public:
    void read()
    {
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    ::array<int, 5> a1;
    a1.read();
    a1.display();
    return 0;
}