// Lab 7.6
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
    srand(time(0));
    int comp_card;
    int comp_suit;
    int user_card;
    int user_suit;
    bool tie = false;
    
    do
    {
        //computer values
        comp_card = 2 + rand() % 13;
        comp_suit = rand() % 3;
        cout << "Computer's card is a ";
        if (comp_card <= 10)
        {
            cout << comp_card ;
        }    
        else if (comp_card == 11)
        {
            cout << "Jack";
        }
        else if (comp_card == 12)
        {
            cout << "Queen";
        }
        else if (comp_card == 13)
        {
            cout << "King";
        }
        else if (comp_card == 14)
        {
            cout << "Ace";
        }
        else
            cout << "ERROR";

        if (comp_suit == 0)
        {
            cout << " of Spades." << endl;
        }
        else if (comp_suit == 1)
        {
            cout << " of Diamonds." << endl;
        }
        else if (comp_suit == 2)
        {
            cout << " of Hearts." << endl;
        }
        else if (comp_suit == 3)
        {
            cout << " of Clubs." << endl;
        }
        
        //user values
        user_card = 2 + rand() % 13;
        user_suit = rand() % 3;
        cout << "Humans's card is a ";
        if (user_card <= 10)
        {
            cout << user_card;
        }    
        else if (user_card == 11)
        {
            cout << "Jack";
        }
        else if (user_card == 12)
        {
            cout << "Queen";
        }
        else if (user_card == 13)
        {
            cout << "King";
        }
        else if (user_card == 14)
        {
            cout << "Ace";
        }
        else 
        {
            cout << "ERROR";
        }

        if (user_suit == 0)
        {
            cout << " of Spades." << endl;
        }
        else if (user_suit == 1)
        {
            cout << " of Diamonds." << endl;
        }
        else if (user_suit == 2)
        {
            cout << " of Hearts." << endl;
        }
        else if (user_suit == 3)
        {
            cout << " of Clubs." << endl;
        }

        //winner
        if (user_card > comp_card)
        {
            cout << "Human wins!" << endl;
            tie = false;
        }
        else if (comp_card > user_card)
        {
            cout << "Computer wins!" << endl;
            tie = false;
        }
        else
        {
            cout << "It's a tie!" << endl;
            tie = true;
        }
    } while (tie);

}