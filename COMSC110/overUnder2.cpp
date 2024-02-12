// Lab 6.7
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
    int secretNum = 1 + rand( ) % 100;
    int userGuess;
    cout << "I'm thinking of a number between 1 and 100. Guess what it is: ";
    cin >> userGuess;
    cin.ignore(1000,10);
    
    while (userGuess != secretNum)
    {
        if (userGuess > secretNum)
        {
            cout << "That's too high -- guess again: ";
            cin >> userGuess;
            cin.ignore(1000,10);
        }
        else if (userGuess < secretNum)
        {
            cout << "That's too low -- guess again: " ;
            cin >> userGuess;
            cin.ignore(1000,10);
        }
        else 
        {
            break;
        }
    }

    cout << "That's right -- it's " << secretNum << endl;
    
}