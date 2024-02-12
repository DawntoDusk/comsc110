// Lab 6.1
// Programmer: Anshu Addanki
// Editor used: TextEdit
// Compiler used: Terminal

#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int answer;
    cout << "Three addition and subtraction problems:" << endl;
    cout << "1 + 2 = ";
    cin >> answer;
    if (answer == 3) 
    {
        cout << "Good job - your answer is correct!" << endl;
    }
    else
    {
        cout << "Nice try, but the right answer is 3." << endl;
    }
    cout << "100 - 99 = ";
    cin >> answer;
    if (answer == 1)
    {
        cout << "Good job - your answer is correct!" << endl;
    }
    else
    {
        cout << "Nice try, but the right answer is 1." << endl;
    }
    cout << "12 + 21 = ";
    cin >> answer;
    if (answer == 33)
    {
        cout << "Good job - your answer is correct!" << endl;
    }
    else
    {
        cout << "Nice try, but the right answer is 33." << endl;
    }
}