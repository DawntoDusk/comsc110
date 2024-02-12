// Lab 7.7
// Programmer: Anshu Addanki
// Editor used: VSCode
// Compiler(s) used: Terminal
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std; 

struct card
{
    int suit, value;
};
int main()
{
    srand(time(0));
    card comp;
    card user;
    bool tie = false;
    int compWins = 0;
    int humanWins = 0;
    bool shouldContinue;
    char userInput;

    do
    {
        //computer values
        comp.value = 2 + rand() % 13;
        comp.suit = rand() % 3;
        cout << "Computer's card is a ";
        if (comp.value <= 10)
        {
            cout << comp.value ;
        }    
        else if (comp.value == 11)
        {
            cout << "Jack";
        }
        else if (comp.value == 12)
        {
            cout << "Queen";
        }
        else if (comp.value == 13)
        {
            cout << "King";
        }
        else if (comp.value == 14)
        {
            cout << "Ace";
        }

        if (comp.suit == 0)
        {
            cout << " of Spades." << endl;
        }
        else if (comp.suit == 1)
        {
            cout << " of Diamonds." << endl;
        }
        else if (comp.suit == 2)
        {
            cout << " of Hearts." << endl;
        }
        else if (comp.suit == 3)
        {
            cout << " of Clubs." << endl;
        }
        
        //user values
        user.value = 2 + rand() % 13;
        user.suit = rand() % 3;
        cout << "Humans's card is a ";
        if (user.value <= 10)
        {
            cout << user.value ;
        }    
        else if (user.value == 11)
        {
            cout << "Jack";
        }
        else if (user.value == 12)
        {
            cout << "Queen";
        }
        else if (user.value == 13)
        {
            cout << "King";
        }
        else if (user.value == 14)
        {
            cout << "Ace";
        }

        if (user.suit == 0)
        {
            cout << " of Spades." << endl;
        }
        else if (user.suit == 1)
        {
            cout << " of Diamonds." << endl;
        }
        else if (user.suit == 2)
        {
            cout << " of Hearts." << endl;
        }
        else if (user.suit == 3)
        {
            cout << " of Clubs." << endl;
        }

        //winner
        if (user.value > comp.value)
        {
            cout << "--<< Human wins! >>--" << endl;
            humanWins += 1;
            tie = false;
        }
        else if (comp.value > user.value)
        {
            cout << "--<< Computer wins! >>--" << endl;
            compWins += 1;
            tie = false;
        }
        else
        {
            cout << "It's a tie!" << endl;
            tie = true;
        }

        cout << "Computer wins: " << compWins << ", Human wins: " << humanWins << endl;

        while (true)
		{
			cout << "Continue? [Y/N]: ";
			cin >> userInput;
			cin.ignore(1000, 10);
			cout << endl;
			
			if (userInput == 'N' || userInput == 'n')
			{	
                		shouldContinue=false;
                		break;
            		}
			else if (userInput == 'Y' || userInput == 'y')	
			{
                		shouldContinue = true;
                		break;
            		}
		}	
        
    } while (tie || shouldContinue);

}