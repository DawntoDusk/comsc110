// Lab 6.3
// Programmer: Anshu Addanki
// Editor used: TextEdit
// Compiler(s) used: Terminal
#include <string> 
#include <iostream>
#include <iomanip>
using namespace std; 
  
int main() 
{ 
    int cashPayment;
    cout << "Cash payment amount: " ;
    cin >> cashPayment;
    int amountTendered;
    cout << "Tendered amount: ";
    cin >> amountTendered;
    int changeDue = amountTendered - cashPayment;
    cout << "Change due: " << changeDue << endl;

    int hundredThousands = changeDue / 100000;
    changeDue = changeDue % 100000;
    if (hundredThousands > 0) 
    {
        cout << " this many hundred thousand dollar bills: " << hundredThousands << endl;
    }

    int tenThousands = changeDue / 10000;
    changeDue = changeDue % 10000;
    if (tenThousands > 0)
    {
        cout << " this many ten thousand dollar bills: " << tenThousands << endl;
    }

    int fiveThousands = changeDue / 5000;
    changeDue = changeDue % 5000;
    if (fiveThousands > 0)
    {
        cout << " this many five thousand dollar bills: " << fiveThousands << endl;
    }

    int thousands = changeDue / 1000;
    changeDue = changeDue % 1000;
    if (thousands > 0)
    {
        cout << " this many thousand dollar bills: " << thousands << endl;
    }

    int fiveHundreds = changeDue / 500;
    changeDue = changeDue % 500;
    if (fiveHundreds > 0)
    {
        cout << " this many five hundred dollar bills: " << fiveHundreds << endl;
    }

    int hundreds = changeDue / 100;
    changeDue = changeDue % 100;
    if (hundreds > 0)
    {
        cout << " this many hundred dollar bills: " << hundreds << endl;
    }

    int fifty = changeDue / 50;
    changeDue = changeDue % 50;
    if (fifty > 0)
    {
        cout << " this many fifty dollar bills: " << fifty << endl;
    }
    int twenty = changeDue / 20;
    changeDue = changeDue % 20;
    if (twenty > 0)
    {
        cout << " this many twenty dollar bills: " << twenty << endl;
    }

    int tens = changeDue / 10;
    changeDue = changeDue % 10;
    if (tens > 0)
    {
        cout << " this many ten dollar bills: " << tens << endl;
   
    }

    int fives = changeDue / 5;
    changeDue = changeDue % 5;
    if (fives > 0)
    {
        cout << " this many five dollar bills: " << fives << endl; 
    }

    int twos = changeDue / 2;
    changeDue = changeDue % 2;
    if (twos > 0)
    {
        cout << " this many two dollar bills: " << twos << endl;

    }

    int ones = changeDue / 1;
    changeDue = changeDue % 1;
    if (ones > 0)
    {
        cout << " this many one dollar bills: " << ones << endl;
    } 
}