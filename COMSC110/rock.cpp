// Lab Midterm 
// Programmer: Anshu Addanki
// Editor used: VSCode
// Compiler(s) used: Terminal
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std; 

int main()
{
    char humanSign;
    bool end = false;
    char compSign;
    int compVal;
    string winner;
    string temp;
    srand(time(0));
 
    while (!end)
    {
        // computer's choice
        compVal = 1 + rand( ) % 3;
        switch (compVal)
        {
        case 1:
            compSign = 'R';
            break;
        case 2:
            compSign = 'P';
            break;
        case 3:
            compSign = 'S';
            break;
        }
        
        // human's choice
	do
	{
		cout << "Choose [Rock,Paper,Scissors,Quit]: "; 
		cin >> humanSign;
		cin.ignore(1000,10);
		if (humanSign == 'Q' || humanSign == 'q')
        	{
            		end = true;
            		break;
        	}
	} while (humanSign != 'R' || humanSign != 'P' || humanSign != 'S' || humanSign != 'r' || humanSign != 'p' || humanSign != 's')
        
	if (!end)
	{
		continue;
	}
	else 
	{
		break;
	}

        //score
        if (compSign == 'R')
        {
            if (humanSign == 'R' || humanSign == 'r')
                winner = "tie";
            else if (humanSign == 'P' || humanSign == 'p')
                winner = "Human wins!";
            else   
                winner = "Computer wins!";
        }
        else if (compSign == 'P')
        {
            if (humanSign == 'P' || humanSign == 'p')
                winner = "tie";
            else if (humanSign == 'S' || humanSign == 's')
                winner = "Human wins!";
            else   
                winner = "Computer wins!";
        }
        else if (compSign == 'S')
        {
            if (humanSign == 'S' || humanSign == 's')
                winner = "tie";
            else if (humanSign == 'R' || humanSign == 'r')
                winner = "Human wins!";
            else   
                winner = "Computer wins!";
        }
        cout << "Computer: " << compSign << ", Human: ";
        switch (humanSign)
        {
        case 'R':
        case 'r':
            cout << "R";
            break;
        case 'P':
        case 'p':
            cout << "P";
            break;   
        case 'S':
        case 's':
            cout << "S";
            break;     
        }
        cout << ", " << winner <<  endl;
        cout << endl;
    }
   
}