// Lab 8.3
// Programmer: Anshu Addanki
// Editor used: VSCode
// Compiler(s) used: Terminal
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std; 

void security()
{
    string password = "password1234";
    string input;
    do
    {
        cout << "Enter the password: ";
        cin >> input;
        cin.ignore(1000,10);
        if (input != password)
            cout << "INVALID" << endl;

    } while (input != password);
    
}  
int main() 
{ 
	security();
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