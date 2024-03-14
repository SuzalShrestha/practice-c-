#include <iostream>
using namespace std;
int main()
{
    int a = 100;
    int &num = a; // basically they are the same but can be called by different name
    cout << a << num << endl;
    num = num + 10;
    cout << a << num;
    return 0;
}