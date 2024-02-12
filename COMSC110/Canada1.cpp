//Anshu Addanki
#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

int main()
{
    float celsius;
    cout << "What's the temperature in Celsius? ";
    cin >> celsius;

    float fahrenheit = 1.8 * celsius  + 32;
    cout << celsius << "º  Celsius equals ";
    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(1);
    cout << fahrenheit << "º Fahrenheit" << endl;
}