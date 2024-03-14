#include <iostream>
#include <string>
using namespace std;
class Student
{
    static int count;
    string password = "password";
    void private_function(void);

public:
    string name;
    int age;
    void set_password(string pass)
    {
        password = pass;
        cout << "Password changed to: " << password << endl;
        private_function();
    }
    static void inCount(void);

protected:
    string protected_variable = "protected";
    void protected_function()
    {
        cout << "This is a protected function" << endl;
    }
};
void Student::private_function(void)
{
    cout << "This is a private function" << endl;
    count++;
};
class Child : protected Student
{
    void child_function()
    {
        cout << "This is a child function" << endl;
    }
};
int Student::count;
void Student::inCount(void)
{

    cout << "Count: " << count << endl;
}
int main()
{
    Student student, s1, s2, s3;
    student.name = "John";
    student.age = 20;
    // cout << "Name: " << student.name << endl;
    // cout << "Age: " << student.age << endl;
    // student.set_password("new_password");
    // Child child;
    // s1.set_password("new_password");
    // s2.set_password("new_password");
    // s3.set_password("new_password");
    s1.inCount();

    return 0;
}