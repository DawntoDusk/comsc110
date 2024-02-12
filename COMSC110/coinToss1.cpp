// Lab 6.5
// Programmer: Anshu Addanki
// Editor used: TextEdit
// Compiler(s) used: Terminal
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std; 

int main()
{
    srand(time(0));
    int val = rand( ) % 2;
    if (val == 0)
    {
        cout << "Heads" << endl;
    }
    if (val == 1)
    {
        cout << "Tails" << endl;
    }
}