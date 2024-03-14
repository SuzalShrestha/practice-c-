#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //& means address of
    //* value of
    int *a;
    int b = 100;
    int *c = &b;
    int **d = &c;
    cout << setw(20) << a << endl; // setw manipulators
    cout << setw(20) << *a << endl;
    cout << setw(20) << &b << endl;
    cout << setw(20) << *c << endl;
    cout << setw(20) << **d << endl;
}