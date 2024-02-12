// Lab 10.3
// Programmer: Anshu Addanki
// Editor used: TextEdit
// Compiler(s) used: Terminal
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std; 

int main()
{
    ifstream fin;
    float celsius;
    fin.open("temps.txt");
    if (!fin.good()) throw "I/O error";

    while (celsius != -999)
    {
        if (!fin.good()) break;

        fin >> celsius;
        fin.ignore(1000,10);

        if (celsius == -999)
        {
            break;
        }
        else
        {
            float fahrenheit = 1.8 * celsius  + 32;
            cout << celsius << "º  Celsius equals ";
            cout.setf(ios::fixed|ios::showpoint);
            cout << setprecision(1);
            cout << fahrenheit << "º Fahrenheit" << endl;
        }
    }
    fin.close();
}