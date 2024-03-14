#include <iostream>
#include <string>
using namespace std;
class Student
{
    char name[30];
    int age;

public:
    void getData()
    {
        cout << "Enter name" << endl;
        cin >> name;
        cout << "Enter age" << endl;
        cin >> age;
    }
    void putData()
    {
        cout << "Name: " << name << endl;
        cout << "Age:" << age << endl;
    }
};
int main()
{
    const int size = 3;
    Student class1[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\n Details of class1 student " << i + 1 << endl;
        class1[i].getData();
    }
    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        class1[i].putData();
    }
    return 0;
}