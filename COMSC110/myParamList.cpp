// Lab 8.1
// Programmer: Anshu Addanki
// Editor used: VSCode
// Compiler(s) used: Terminal
#include <iostream>
#include <iomanip>
using namespace std;

double calcAverage(int a, int b, int c)
{
    double result = 0.0;
    result = (a + b + c) / 3.0;
    return result;
} 

int main()
{
    int w;
    cout << "Enter the first whole number: ";
    cin >> w;
    cin.ignore(1000,10);

    int x;
    cout << "Enter the second whole number: ";
    cin >> x;
    cin.ignore(1000,10);

    int y;
    cout << "Enter the third whole number: ";
    cin >> y;
    cin.ignore(1000,10);

    double z = calcAverage(w, x, y);
    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2);

    cout << z << endl;
} 
