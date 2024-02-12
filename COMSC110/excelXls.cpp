// Lab 10.8
// Programmer: Anshu Addanki
// Editor used: VSCode
// Compiler(s) used: Terminal
#include <string> 
#include <iostream>
#include <iomanip>
#include <fstream>
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
    
    ofstream fout;
    fout.open("change.xls");
    if(!fout.good()) throw "I/O error";

    fout << "dividend" << '\t' << "count" << endl;

    cout << "Cash payment amount: " ;
    cin >> cashPayment;
    cout << "Tendered amount: ";
    cin >> amountTendered;

    changeDue = amountTendered - cashPayment;
    cout << "Change due: " << changeDue << endl;

    hundredThousands = changeDue / 100000;
    changeDue = changeDue % 100000;
    if (hundredThousands > 0) 
    {
        cout << " this many hundred thousand dollar bills: " << hundredThousands << endl;
        fout << 100000 << '\t' << hundredThousands << endl;
    }

    tenThousands = changeDue / 10000;
    changeDue = changeDue % 10000;
    if (tenThousands > 0)
    {
        cout << " this many ten thousand dollar bills: " << tenThousands << endl;
        fout << 10000 << '\t' << tenThousands << endl;
    }

    fiveThousands = changeDue / 5000;
    changeDue = changeDue % 5000;
    if (fiveThousands > 0)
    {
        cout << " this many five thousand dollar bills: " << fiveThousands << endl;
        fout << 5000 << '\t' << fiveThousands << endl;
    }

    thousands = changeDue / 1000;
    changeDue = changeDue % 1000;
    if (thousands > 0)
    {
        cout << " this many thousand dollar bills: " << thousands << endl;
        fout << 1000 << '\t' << thousands << endl;
    }

    fiveHundreds = changeDue / 500;
    changeDue = changeDue % 500;
    if (fiveHundreds > 0)
    {
        cout << " this many five hundred dollar bills: " << fiveHundreds << endl;
        fout << 500 << '\t' << fiveHundreds << endl;
    }

    hundreds = changeDue / 100;
    changeDue = changeDue % 100;
    if (hundreds > 0)
    {
        cout << " this many hundred dollar bills: " << hundreds << endl;
        fout << 100 << '\t' << hundreds << endl;
    }

    fifty = changeDue / 50;
    changeDue = changeDue % 50;
    if (fifty > 0)
    {
        cout << " this many fifty dollar bills: " << fifty << endl;
        fout << 50 << '\t' << fifty << endl;
    }
    
    twenty = changeDue / 20;
    changeDue = changeDue % 20;
    if (twenty > 0)
    {
        cout << " this many twenty dollar bills: " << twenty << endl;
        fout << 20 << '\t' << twenty << endl;
    }

    tens = changeDue / 10;
    changeDue = changeDue % 10;
    if (tens > 0)
    {
        cout << " this many ten dollar bills: " << tens << endl;
        fout << 10 << '\t' << tens << endl;
    }

    fives = changeDue / 5;
    changeDue = changeDue % 5;
    if (fives > 0)
    {
        cout << " this many five dollar bills: " << fives << endl; 
        fout << 5 << '\t' << fives << endl;
    }

    twos = changeDue / 2;
    changeDue = changeDue % 2;
    if (twos > 0)
    {
        cout << " this many two dollar bills: " << twos << endl;
        fout << 2 << '\t' << twos << endl;
    }

    ones = changeDue / 1;
    changeDue = changeDue % 1;
    if (ones > 0)
    {
        cout << " this many one dollar bills: " << ones << endl;
        fout << 1 << '\t' << ones << endl;
    }
    
}