#include <iostream>
using namespace std;
class stats
{
    static int count;
    int x;

public:
    stats(int a)
    {
        x = a;
        count++;
    }
    void display()
    {
        cout << "x=" << x << endl;
    }
    static void showCount()
    {
        cout << "Count=" << count << endl;
        // cout << "x=" << x << endl; // error: cannot access non-static member x without object
    }
};
int stats::count;
int main()
{
    stats s1(10), s2(20), s3(30), s4(40);
    s1.display();
    s1.showCount();
    return 0;
}