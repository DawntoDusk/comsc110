// Lab 6.6
// Programmer: Anshu Addanki
// Editor used: TextEdit
// Compiler(s) used: Terminal
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std; 

int main()
{
    srand(time(0));
    int secretNum = 1 + rand( ) % 10;
    int userGuess;
    cout << "I'm thinking of a number between 1 and 10. Guess what it is: ";
    cin >> userGuess;
    cin.ignore(1000,10);

    if (userGuess > secretNum)
    {
        cout << "That's too high -- it's " << secretNum << endl;
    }
    else if (userGuess < secretNum)
    {
        cout << "That's too low -- it's " << secretNum << endl;
    }
    else 
    {
        cout << "That's right -- it's " << secretNum << endl;
    }
}