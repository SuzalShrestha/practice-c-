#include <iostream>
using namespace std;
class Time
{
    int hrs, mins;

public:
    void gettime(int h, int m)
    {
        hrs = h;
        mins = m;
    }
    void puttime(void)
    {
        cout << "Hours: " << hrs << endl;
        cout << "Minutes: " << mins << endl;
    }
    void sum(Time, Time);
};
void Time::sum(Time time1, Time time2)
{
    mins = time1.mins + time2.mins;
    hrs = mins / 60;
    mins = mins % 60;
    hrs = hrs + time1.hrs + time2.hrs;
    cout << "Hours: " << hrs << endl;
    cout << "Minutes: " << mins << endl;
}
int main()
{
    Time T1, T2, T3;
    T1.gettime(2, 45);
    T2.gettime(3, 30);
    T3.sum(T1, T2);
    T1.puttime();
    T2.puttime();
    T3.puttime();
    return 0;
}