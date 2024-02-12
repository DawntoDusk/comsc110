// Lab 7.3
// Programmer: Anshu Addanki
// Editor used: VSCode
// Compiler(s) used: Terminal
#include <string> 
#include <iostream>
#include <iomanip>
using namespace std; 
  
int main() 
{ 
    int cashPayment;
    int amountTendered;
    int changeDue;
    int hundredThousands;
    int tenThousands;
    int fiveThousands;
    int thousands;
    int fiveHundreds;
    int hundreds;
    int fifty;
    int twenty;
    int tens;
    int fives;
    int twos;
    int ones;
    bool end = false;

    while (!end)
    {
        cout << "Cash payment amount: " ;
        cin >> cashPayment;
        if (cashPayment == 0)
        {
            end = true;
            break;
        }
        cout << "Tendered amount: ";
        cin >> amountTendered;
        changeDue = amountTendered - cashPayment;
        cout << "Change due: " << changeDue << endl;

        hundredThousands = changeDue / 100000;
        changeDue = changeDue % 100000;
        if (hundredThousands > 0) 
        {
            cout << " this many hundred thousand dollar bills: " << hundredThousands << endl;
        }

        tenThousands = changeDue / 10000;
        changeDue = changeDue % 10000;
        if (tenThousands > 0)
        {
            cout << " this many ten thousand dollar bills: " << tenThousands << endl;
        }

        fiveThousands = changeDue / 5000;
        changeDue = changeDue % 5000;
        if (fiveThousands > 0)
        {
            cout << " this many five thousand dollar bills: " << fiveThousands << endl;
        }

        thousands = changeDue / 1000;
        changeDue = changeDue % 1000;
        if (thousands > 0)
        {
            cout << " this many thousand dollar bills: " << thousands << endl;
        }

        fiveHundreds = changeDue / 500;
        changeDue = changeDue % 500;
        if (fiveHundreds > 0)
        {
            cout << " this many five hundred dollar bills: " << fiveHundreds << endl;
        }

        hundreds = changeDue / 100;
        changeDue = changeDue % 100;
        if (hundreds > 0)
        {
            cout << " this many hundred dollar bills: " << hundreds << endl;
        }

        fifty = changeDue / 50;
        changeDue = changeDue % 50;
        if (fifty > 0)
        {
            cout << " this many fifty dollar bills: " << fifty << endl;
        }
        
        twenty = changeDue / 20;
        changeDue = changeDue % 20;
        if (twenty > 0)
        {
            cout << " this many twenty dollar bills: " << twenty << endl;
        }

        tens = changeDue / 10;
        changeDue = changeDue % 10;
        if (tens > 0)
        {
            cout << " this many ten dollar bills: " << tens << endl;
    
        }

        fives = changeDue / 5;
        changeDue = changeDue % 5;
        if (fives > 0)
        {
            cout << " this many five dollar bills: " << fives << endl; 
        }

        twos = changeDue / 2;
        changeDue = changeDue % 2;
        if (twos > 0)
        {
            cout << " this many two dollar bills: " << twos << endl;

        }

        ones = changeDue / 1;
        changeDue = changeDue % 1;
        if (ones > 0)
        {
            cout << " this many one dollar bills: " << ones << endl;
        }
    } 
}