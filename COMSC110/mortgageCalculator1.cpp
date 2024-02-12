#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std; 
  
int main() 
{ 
	int p = 2700;
	float r = 5.2 / 1200;
	int n = 30 * 12; 
	float monthlyPayment = (p * pow(1+r, n) * r) / (pow(1+r, n) - 1);
    
	cout << "Amount borrowed (programmer input) = " << p <<endl;
	cout << "Annual Interest (programmer input) = " << r*1200 <<endl;
	cout << "Payback Period (programmer input) = " << n/12 <<endl;
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << "Monthly payment (calculated output) = " << monthlyPayment <<endl;

}