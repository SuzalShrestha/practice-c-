#include <iostream>
using namespace std;

void test(int x)
{
    try
    {
        if (x == 1)
            throw x;
        else if (x == 0)
            throw 'x';
        else if (x == -1)
        {
            throw 1.0;
        }
        cout << "End of test " << endl;
    }
    // catch (char c)
    // {
    //     cout << "char\n";
    // }
    // catch (int m)
    // {
    //     cout << "int\n";
    // }
    // catch (double d)
    // {
    //     cout << "Double\n";
    // }
    catch (...)
    {
        cout << "For all errors\n"; // for all catches and you should put at last.
    }
}
int main()
{
    test(1);
    test(2);
    test(0);
    test(-1);
    test(1.0);
    return 0;
}