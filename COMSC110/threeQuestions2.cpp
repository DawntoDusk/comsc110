// Lab 8.5
// Programmer: Anshu Addanki
// Editor used: TextEdit
// Compiler used: Terminal

#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

void check (string question, string answer, string answer2)
{
    while (true)
    {
        string input;
        cout << question;
        getline(cin, input);

        if (input == answer || input == answer2)
        {
            cout << "Correct!" << endl;
            break;
        }
        else    
        {
            cout << "Incorrect." << endl;
            break;
        }
    }
    
}
void check (string question, string answer)
{
    while (true)
    {
        string input;
        cout << question;
        getline(cin, input);

        if (input == answer)
        {
            cout << "Correct!" << endl;
            break;
        }
        else    
        {
            cout << "Incorrect." << endl;
            break;
        }
    }
    
}

int main()
{
    check("1. Who founded Microsoft? ", "Bill Gates", "Gates");
    check("2. When were computers invented: ", "1999");
    check("3. How many computer languages are there? ", "Lots");
}