#include <iostream>
using namespace std; // for making all the functions of std available in the current scope
// std::cout for making only cout available in the current scope
namespace first
{
    void say_hello()
    {
        cout << "Hello from first namespace" << endl;
    }
} // namespace first
using namespace first; // for making all the functions of first available in the current scope
int main()
{
    first::say_hello();
    return 0;
}