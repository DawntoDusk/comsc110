// Lab 10.2
// Programmer: Anshu Addanki
// Editor used: VSCode
// Compiler(s) used: Terminal

#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std; 
  
int main() 
{ 
    ifstream fin;
    int monthlyAddition;
    float rate;
    int yearsLeft;

    fin.open("savings.txt");
    if (!fin.good()) throw "I/O error";
    fin >> yearsLeft;
    fin.ignore(1000,10);
    fin >> rate;
    fin.ignore(1000,10);
    fin >> monthlyAddition;
    fin.ignore(1000,10);
    fin.close();

    float final = monthlyAddition * (pow(1 + (rate/1200), yearsLeft*12) - 1)/(rate/1200);

    cout << "In " << yearsLeft << " years at " << rate << "%, $" << monthlyAddition << " deposited per month will grow to $";
    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2);
    cout << final << "." << endl;
}