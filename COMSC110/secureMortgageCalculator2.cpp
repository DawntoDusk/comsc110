// Lab 8.4
// Programmer: Anshu Addanki
// Editor used: VSCode
// Compiler(s) used: Terminal
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std; 

int security()
{
    string password = "password1234";
    string input;
    int count = 0;
    do
    {
        cout << "Enter the password: ";
        cin >> input;
        cin.ignore(1000,10);
        if (input != password)
            cout << "INVALID" << endl;
        count ++;

    } while (input != password && count < 3);
    return count;

    
}  
int main() 
{ 
    int tries = security();
    if (tries == 3)
        cout << "Too many invalid tries." << endl;
    else
    {
        int n = 30 * 12; 
        float monthlyPayment;
        int p;
        cout << "\nWhat's the amount borrowed: " ;
        cin >> p;
        float r;
        cout << "What's the annual interest: " ;
        cin >> r;
        r = r/1200;
        monthlyPayment = (p* pow(1+r,n)  *r) / ( pow(1+r, n) -1);	
        cout << "\nAmount borrowed (programmer input) = $" << p <<endl;
        cout << "Annual Interest (programmer input) = " << (r*1200) <<endl;
        cout << "Payback Period (programmer input) = " << "30 years" <<endl;
        cout.setf(ios::fixed|ios::showpoint);
        cout << setprecision(2);
        cout << "Monthly payment (output) = $" << monthlyPayment <<endl;
    }

}