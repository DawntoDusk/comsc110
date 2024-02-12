// Lab 11.3
// Programmer: Anshu Addanki
// Editor used: VsCode
// Compiler used: Terminal

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int temps[5];

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter the high for San Ramon on Nov " << i+15 << ": ";
        cin >> temps[i];
        cin.ignore(1000,10);
    }

    cout << "San Ramon, California forecast high temperatures:" << endl;
    cout << "Wednesday, Nov 15, " << temps[0] << " degrees." << endl;
    cout << "Thursday, Nov 16, " << temps[1] << " degrees." << endl;
    cout << "Friday, Nov 17, " << temps[2] << " degrees." << endl;
    cout << "Saturday, Nov 18, " << temps[3] << " degrees." << endl;
    cout << "Sunday, Nov 19, " << temps[4] << " degrees.\n" << endl;
	

    int high = temps[0];
    int highCount = 0;
    int low = temps[0];
    int lowCount = 0;

    for(int i = 0; i < 5; i++)
    {
        if(temps[i] > high)
        {
            high = temps[i];
        }
        if (temps[i] < low)
        {
            low = temps[i];
        }
    }
    for(int i = 0; i < 5; i++)
    {
        if(temps[i] == high)
        {
            highCount ++;
        }
        if (temps[i] == low)
        {
            lowCount ++;
        }
    }
    cout << "The high for the week is " << high << " degrees, ";
    if(highCount > 1)
    {
        cout << " occuring " << highCount << " times." << endl;
    }
    else
    {
        cout << " occuring once." << endl;
    }

    cout << "The low for the week is " << low << " degrees, ";
    if(lowCount > 1)
    {
        cout << " occuring " << lowCount << " times." << endl;
    }
    else
    {
        cout << " occuring once." << endl;
    }
}