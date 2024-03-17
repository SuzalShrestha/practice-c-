#include <iostream>
using namespace std;
void divide(double x, double y)
{
    try
    {
        if (y == 0)
        {
            throw y;
        }
        else
        {
            cout << "Division is: " << x / y << endl;
        }
    }
    catch (double)
    {
        cout << "Division by zero is not allowed" << endl;
        throw;
    }
}
int main()
{
    try
    {
        divide(10, 0);
    }
    catch (double)
    {
        cout << "Caught in main" << endl;
    }
    return 0;
}