//Anshu Addanki
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std; 
  
int main() 
{ 
	int n = 30 * 12; 
	float monthlyPayment;
	int p;
	cout << "Amount borrowed (programmer input) = " ;
	cin >> p;
	float r;
	cout << "Annual Interest (programmer input) = " ;
	cin >> r;
	r = r/1200;
	monthlyPayment = (p* pow(1+r,n)  *r) / ( pow(1+r, n) -1);	
	cout << "Amount borrowed (programmer input) = $" << p <<endl;
	cout << "Annual Interest (programmer input) = " << (r*1200) <<endl;
	cout << "Payback Period (programmer input) = " << "30 years" <<endl;
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << "Monthly payment (output) = $" << monthlyPayment <<endl;

}