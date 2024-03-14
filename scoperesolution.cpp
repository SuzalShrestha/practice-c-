#include <iostream>
using namespace std;
int a = 100; // Global variable
class test
{
    int a = 1; // Local variable

public:
    void display()
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of ::a: " << ::a << endl;
    }
};
int main()
{
    test obj;
    obj.display();
    return 0;
}
