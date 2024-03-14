#include <iostream>
using namespace std;
class test
{
    int a;

public:
    test(int x)
    {

        cout << a << endl;
    }
};
int main()
{
    test t1(10);
    return 0;
}