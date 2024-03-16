#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    void display()
    {
        cout << "Real: " << real << endl;
        cout << "Imaginary: " << imag << endl;
    }
    // complex operator+(complex c1)
    // {
    //     complex temp;
    //     temp.real = real + c1.real;
    //     temp.imag = imag + c1.imag;
    //     return temp;
    // }
    friend complex operator+(complex, complex);
};
complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    c1.real = 100;
    c2.real = 200;
    return temp;
}
int main()
{
    complex c1(10, 20);
    complex c2(20, 30);
    complex c3;
    c1.display();
    c2.display();
    c3 = c1 + c2;
    c3.display();
    c2.display();
    c1.display();
    return 0;
}