#include <iostream>
using namespace std;
class concat
{
    char str[100];

public:
    concat(char x[])
    {
        strcpy(str, x);
    }
    void display()
    {
        cout << str << endl;
    }
    void operator+(concat c)
    {
        strcat(str, c.str);
    }
};
int main()
{
    concat c1("Hello there");
    concat c2(" How are you?");
    c1.display();
    c2.display();
    c1 + c2;
    c1.display();
    return 0;
}