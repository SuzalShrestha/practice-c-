#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream ifile("test");
    ifile << "This is for test"
          << "\n"
          << endl;
    ifile.close();
    return 0;
}