#include <iostream>
using namespace std;
class dates
{
    int day, month, year;

public:
    void getDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void dis()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
    void operator-(dates d)
    {
        long int d1, d2;
        d1 = day + month * 30 + year * 365;
        d2 = d.day + d.month * 30 + d.year * 365;
        cout << "Difference is : " << d1 - d2 << "days" << endl;
    }
};
int main()
{
    dates d1, d2;
    d1.getDate(17, 3, 2024);
    d2.getDate(19, 3, 2004);
    d1.dis();
    d2.dis();
    d1 - d2;
    return 0;
}