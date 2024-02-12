// Lab 6.4
// Programmer: Anshu Addanki
// Editor used: TextEdit
// Compiler(s) used: Terminal
#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

int main()
{
    float celsius;
    while (celsius != -999)
    {
        cout << "What's the temperature in Celsius? ";
        cin >> celsius;
        cin.ignore(1000,10);
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
}