//Anshu Addanki
#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std; 
  
int main() 
{ 
	int monthlyAddition;
	float rate;
	int yearsLeft;
	cout << "What's the number of years left: ";
	cin >> yearsLeft;
	cout << "What is the expected annual interest rate percentage: ";
	cin >> rate;
	cout << "What is the monthly deposit amount: ";
	cin >> monthlyAddition;
	float final = monthlyAddition * (pow(1 + (rate/1200), yearsLeft*12) - 1)/(rate/1200);

	cout << "In " << yearsLeft << " years at " << rate << "%, $" << monthlyAddition << " deposited per month will grow to $";
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << final << "." << endl;
}