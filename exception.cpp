#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int quotient = a / b;
    try
    {
        if (quotient != 0)
        {
            cout << "The quotient is " << quotient << endl;
        }
        else
        {
            throw(quotient);
        }
    }
    catch (int x)
    {
        cout << "Exception detected : " << x << " Error!!! " << endl;
    }
    cout << "End" << endl;
    return 0;
}
/*
Notes
to catch all exception
catch(...){
    code
}
to catch specific data type
catch (int or char or double){
    code
}
*/