// Lab 11.4
// Programmer: Anshu Addanki
// Editor used: VsCode
// Compiler used: Terminal

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int size = 4;
    int values[size];

    for(int i = 0; i < size; i++)
    {
        cout << "Enter a number: ";
        cin >> values[i];
        cin.ignore(1000,10);
    }

    int total = 0;

    for(int i = 0; i < size; i++)
    {
        total += values[i];
    }
    
    double avg = total/4.0;
    cout << "The average of 4 numbers is " << avg << endl;

    int greaterAvg = 0;
    for(int i = 0; i < size; i++)
    {
        if(values[i] > avg)
        {
            greaterAvg ++;
        }
    }    

    cout << greaterAvg << " scores are greater than average." << endl;
}