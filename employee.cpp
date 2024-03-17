#include <iostream>
using namespace std;
#include <fstream>
class Employee
{
    char name[20];
    char phone[10];
    char address[50];

public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter phone: ";
        cin >> phone;
        cout << "Enter address: ";
        cin >> address;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Phone: " << phone << endl;
        cout << "Address: " << address << endl;
    }
};
int main()
{
    Employee e[10];
    fstream file;
    file.open("Employee.dat", ios::out | ios::in);
    for (int i = 0; i < 10; i++)
    {
        cout << "Input: " << endl;
        e[i].getData();
        file.write((char *)&e[i], sizeof(e[i]));
    }
    file.seekg(0);
    for (int i = 0; i < 10; i++)
    {
        cout << "Output: " << endl;
        file.read((char *)&e[i], sizeof(e[i]));
        e[i].display();
    }
    file.close();
    return 0;
}