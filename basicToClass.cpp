#include <iostream>
using namespace std;
class time1
{
    int hours, minutes;

public:
    time1() {}
    time1(int h)
    {
        hours = h / 60;
        minutes = h % 60;
    }
    void display()
    {
        cout << "Hours: " << hours << endl;
        cout << "Minutes: " << minutes << endl;
    }
};
int main()
{
    time1 t1;
    int duration = 121;
    t1 = duration;
    t1.display();
    return 0;
}