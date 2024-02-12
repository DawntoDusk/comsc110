// Lab 7.4
// Programmer: Anshu Addanki
// Editor used: VSCode
// Compiler(s) used: Terminal
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std; 

int main()
{
    srand(time(0));
    int numRuns;
    cout << "Enter the number of tosses to perform: ";
    cin >> numRuns;
    cin.ignore(1000,10);
    int val;

    for (int i = 0; i < numRuns; i++)
    {
        val = rand( ) % 2;
        if (val == 0)
        {
            cout << "Heads" << endl;
        }
        if (val == 1)
        {
            cout << "Tails" << endl;
        }
    }
}