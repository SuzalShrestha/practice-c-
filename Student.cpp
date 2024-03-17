#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;
    int marks1, marks2;

public:
    void read()
    {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter marks of 2 subjects: ";
        cin >> marks1 >> marks2;
    }
    void display()
    {
        cout << "Roll number: " << roll << endl;
        cout << "Marks: ";
        cout << marks1 << " " << marks2;
        cout << endl;
    }
};
class Test : public Student
{
protected:
    int marks1;
    int marks2;

public:
    void read()
    {
        // Student::read();
        cout << "Enter marks of 2 subjects: ";
        cin >> marks1 >> marks2;
    }
    void display()
    {
        // Student::display();
        cout << "Marks: " << marks1 << " " << marks2 << endl;
    }
};
class Result : public Test
{
protected:
    int marks1;
    int marks2;
    int total;

public:
    Result(int roll) : Student(roll)
    {
    }
    void display()
    {
        total = marks1 + marks2;
        cout << "Total marks: " << total << endl;
    }
};
int main()
{
    Result r(2);
    r.read();
    r.display();
    return 0;
}
