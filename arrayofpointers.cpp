#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i = 0;
    char *ptr[20] = {"Books", "Macbook", "Shoe", "Gloves"};
    char str[25];
    cout << "Enter a string\n ";
    cin >> str;
    for (i = 0; i < 4; i++)
    {
        if (strcmp(str, ptr[i]))
        {
            cout << "Your string is available" << endl;
            break;
        }
    }
    if (i == 4)
    {
        cout << "your string not available" << endl;
    }
}