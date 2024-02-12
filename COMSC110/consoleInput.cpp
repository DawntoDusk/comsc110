//Anshu Addanki
#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int age;
    string name;
    float currentTemp;
    string cityName;

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(1000, 10);

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter the temperature outside right now (degrees F): ";
    cin >> currentTemp;
    cin.ignore(1000, 10);

    cout << "What city are you in now? ";
    getline(cin, cityName);

    cout << name << " is " << age << " years old." << endl;
    cout << "It's " << currentTemp << " degrees F in " << cityName << "." << endl;

}