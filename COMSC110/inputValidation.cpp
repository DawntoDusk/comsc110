// Lab 6.2
// Programmer: Anshu Addanki
// Editor used: TextEdit
// Compiler(s) used: Terminal
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std; 
  
int main() 
{ 
	int p = 2700;
	float r = 5.2 / 1200;
	int n = 30 * 12; 
	float monthlyPayment = p * ((pow(1 + r, n) - 1) / r);
	string password;
	while (password != "StR0nG!p@$$w0rd")
	{
	   cout << "Enter password: ";
	   cin >> password;
	   cin.ignore(1000,10);
	}
	cout << "In " << n/12 << " years, $" << p << " will grow to ";
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << "$" << monthlyPayment <<endl;

}