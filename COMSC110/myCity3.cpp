// Lab 11.2
// Programmer: Anshu Addanki
// Editor used: VsCode
// Compiler used: Terminal

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int temps[5] = {75, 74, 76, 73, 73};

    cout << "San Ramon, California forecast high temperatures:" << endl;
    cout << "Wednesday, Nov 15, " << temps[0] << " degrees." << endl;
    cout << "Thursday, Nov 16, " << temps[1] << " degrees." << endl;
    cout << "Friday, Nov 17, " << temps[2] << " degrees." << endl;
    cout << "Saturday, Nov 18, " << temps[3] << " degrees." << endl;
    cout << "Sunday, Nov 19, " << temps[4] << " degrees.\n" << endl;
	
    int high = temps[0];
    int low = temps[0];
    
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
    cout << "The high for the week is " << high << " degrees." << endl;
    cout << "The low for the week is " << low << " degrees.\n" << endl;
    cout << "source: weather.com" << endl;

}