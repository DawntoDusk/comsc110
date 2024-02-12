// Lab 9.1
// Programmer: Anshu Addanki
// Editor used: VsCode
// Compiler used: Terminal

#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

bool check (string question, string answer, string answer2)
{
    while (true)
    {
        string input;
        cout << question;
        getline(cin, input);

        if (input == answer || input == answer2)
        {
            return true;
        }
        else    
        {
            return false;
        }
    }
    
}
bool check (string question, string answer)
{
    while (true)
    {
        string input;
        cout << question;
        getline(cin, input);

        if (input == answer)
        {
            return true;
        }
        else    
        {
            return false;
        }
    }
    
}

int main()
{
    int count_correct = 0;
    if (check("1. Who founded Microsoft? ", "Bill Gates", "Gates"))
    {
        count_correct++;
        cout << "Correct!" << endl;
    }   
    else
        cout << "Incorrect!" << endl; 

    if (check("2. When were computers invented: ", "1999"))
    {
        count_correct ++;
        cout << "Correct!" << endl;
    } 
    else
        cout << "Incorrect!" << endl;   

    if(check("3. How many computer languages are there? ", "Lots"))
    {
        count_correct ++;
        cout << "Correct!" << endl;
    }    
    else
        cout << "Incorrect!" << endl;

    cout << "That's " << count_correct << " correct out of 3 questions asked." << endl;
}